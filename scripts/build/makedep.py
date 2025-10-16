#!/usr/bin/python
##
## license:BSD-3-Clause
## copyright-holders:Vas Crabb

import argparse
import glob
import io
import os.path
import sys
import xml.sax


def path_components(path):
    result = [ ]
    while True:
        path, basename = os.path.split(path)
        if basename:
            result.append(basename)
        else:
            if path:
                result.append(path)
            return tuple(reversed(result))


class ParserBase:
    def process_lines(self, inputfile):
        self.input_line = 1
        for line in inputfile:
            start = 0
            if line.endswith('\n'):
                line = line[:-1]
            used = 0
            while used is not None:
                start += used
                used = self.processors[self.parse_state](line[start:])
            self.input_line += 1


class CppParser(ParserBase):
    TOKEN_LEAD = frozenset(
            [chr(x) for x in range(ord('A'), ord('Z') + 1)] +
            [chr(x) for x in range(ord('a'), ord('z') + 1)] +
            ['_'])
    TOKEN_CONTINUATION = frozenset(
            [chr(x) for x in range(ord('0'), ord('9') + 1)] +
            [chr(x) for x in range(ord('A'), ord('Z') + 1)] +
            [chr(x) for x in range(ord('a'), ord('z') + 1)] +
            ['_'])
    HEXADECIMAL_DIGIT = frozenset(
            [chr(x) for x in range(ord('0'), ord('9') + 1)] +
            [chr(x) for x in range(ord('A'), ord('F') + 1)] +
            [chr(x) for x in range(ord('a'), ord('f') + 1)])

    class Handler:
        def line(self, text):
            pass

        def comment(self, text):
            pass

        def line_comment(self, text):
            pass

    class ParseState:
        DEFAULT = 0
        COMMENT = 1
        LINE_COMMENT = 2
        TOKEN = 3
        STRING_CONSTANT = 4
        CHARACTER_CONSTANT = 5
        NUMERIC_CONSTANT = 6

    def __init__(self, handler, **kwargs):
        super().__init__(**kwargs)
        self.handler = handler
        self.processors = {
                self.ParseState.DEFAULT: self.process_default,
                self.ParseState.COMMENT: self.process_comment,
                self.ParseState.LINE_COMMENT: self.process_line_comment,
                self.ParseState.TOKEN: self.process_token,
                self.ParseState.STRING_CONSTANT: self.process_text,
                self.ParseState.CHARACTER_CONSTANT: self.process_text,
                self.ParseState.NUMERIC_CONSTANT: self.process_numeric }

    def parse(self, inputfile):
        self.parse_state = self.ParseState.DEFAULT
        self.comment_line = None
        self.lead_digit = None
        self.radix = None
        self.line_buffer = ''
        self.comment_buffer = ''
        self.process_lines(inputfile)
        if self.parse_state == self.ParseState.COMMENT:
            raise Exception('unterminated multi-line comment beginning on line %d' % (self.comment_line, ))
        elif self.parse_state == self.ParseState.CHARACTER_CONSTANT:
            raise Exception('unterminated character literal on line %d' % (self.input_line, ))
        elif self.parse_state == self.ParseState.STRING_CONSTANT:
            raise Exception('unterminated string literal on line %d' % (self.input_line, ))

    def process_default(self, line):
        escape = False
        pos = 0
        length = len(line)
        while pos < length:
            ch = line[pos]
            if (ch == '"') or (ch == "'"):
                self.parse_state = self.ParseState.STRING_CONSTANT if ch == '"' else self.ParseState.CHARACTER_CONSTANT
                self.line_buffer += line[:pos + 1]
                return pos + 1
            elif ch == '*':
                if escape:
                    self.parse_state = self.ParseState.COMMENT
                    self.comment_line = self.input_line
                    self.line_buffer += line[:pos - 1] + ' '
                    return pos + 1
            elif ch == '/':
                if escape:
                    self.parse_state = self.ParseState.LINE_COMMENT
                    self.handler.line(self.line_buffer + line[:pos - 1] + ' ')
                    self.line_buffer = ''
                    return pos + 1
            elif ch in self.TOKEN_LEAD:
                self.parse_state = self.ParseState.TOKEN
                self.line_buffer += line[:pos]
                return pos
            elif (ch >= '0') and (ch <= '9'):
                self.parse_state = self.ParseState.NUMERIC_CONSTANT
                self.line_buffer += line[:pos]
                return pos
            escape = ch == '/'
            pos += 1
        if line.endswith('\\'):
            self.line_buffer += line[:-1]
        else:
            self.handler.line(self.line_buffer + line)
            self.line_buffer = ''

    def process_comment(self, line):
        escape = False
        pos = 0
        length = len(line)
        while pos < length:
            ch = line[pos]
            if escape and (ch == '/'):
                self.parse_state = self.ParseState.DEFAULT
                self.comment_line = None
                self.handler.comment(self.comment_buffer + line[:pos - 1])
                self.comment_buffer = ''
                return pos + 1
            escape = ch == '*'
            pos += 1
        if line.endswith('\\'):
            self.comment_buffer += line[:-1]
        else:
            self.comment_buffer += line + '\n'

    def process_line_comment(self, line):
        self.parse_state = self.ParseState.DEFAULT
        self.handler.line_comment(self.comment_buffer + line)
        self.comment_buffer = ''

    def process_token(self, line):
        pos = 0
        length = len(line)
        while pos < length:
            ch = line[pos]
            if ch not in self.TOKEN_CONTINUATION:
                self.parse_state = self.ParseState.DEFAULT
                self.line_buffer += line[:pos]
                return pos
            pos += 1
        self.parse_state = self.ParseState.DEFAULT
        self.handler.line(self.line_buffer + line)
        self.line_buffer = ''

    def process_text(self, line):
        quote = '"' if self.parse_state == self.ParseState.STRING_CONSTANT else "'"
        escape = False
        pos = 0
        length = len(line)
        while pos < length:
            ch = line[pos]
            if (ch == quote) and not escape:
                self.parse_state = self.ParseState.DEFAULT
                self.line_buffer += line[:pos + 1]
                return pos + 1
            escape = (ch == '\\') and not escape
            pos += 1
        if line.endswith('\\'):
            self.line_buffer += line[:-1]
        else:
            t = 'string' if self.ParseState == self.ParseState.STRING_CONSTANT else 'character'
            raise Exception('unterminated %s literal on line %d' % (t, self.input_line))

    def process_numeric(self, line):
        escape = False
        pos = 0
        length = len(line)
        while pos < length:
            ch = line[pos]
            if self.lead_digit is None:
                self.lead_digit = ch
                if ch != '0':
                    self.radix = 10
            elif self.radix is None:
                if ch == "'":
                    if escape:
                        raise Exception('adjacent digit separators on line %d' % (self.input_line, ))
                    else:
                        escape = True
                elif (ch == 'B') or (ch == 'b'):
                    self.radix = 2
                elif (ch == 'X') or (ch == 'x'):
                    self.radix = 16
                elif (ch >= '0') and (ch <= '7'):
                    self.radix = 8
                else:
                    self.parse_state = self.ParseState.DEFAULT # probably an argument to a token-pasting or stringifying macro
            else:
                if ch == "'":
                    if escape:
                        raise Exception('adjacent digit separators on line %d' % (self.input_line, ))
                    else:
                        escape = True
                else:
                    escape = False
                    if self.radix == 2:
                        if (ch < '0') or (ch > '1'):
                            self.parse_state = self.ParseState.DEFAULT
                    elif self.radix == 8:
                        if (ch < '0') or (ch > '7'):
                            self.parse_state = self.ParseState.DEFAULT
                    elif self.radix == 10:
                        if (ch < '0') or (ch > '9'):
                            self.parse_state = self.ParseState.DEFAULT
                    elif self.radix == 16:
                        if ch not in self.HEXADECIMAL_DIGIT:
                            self.parse_state = self.ParseState.DEFAULT
            if self.parse_state == self.ParseState.DEFAULT:
                self.lead_digit = None
                self.radix = None
                self.line_buffer += line[:pos]
                return pos
            pos += 1
        self.parse_state = self.ParseState.DEFAULT
        self.lead_digit = None
        self.radix = None
        self.handler.line(self.line_buffer + line)
        self.line_buffer = ''


class LuaParser(ParserBase):
    class Handler:
        def short_comment(self, text):
            pass

        def long_comment_start(self, level):
            pass

        def long_comment_line(self, text):
            pass

        def long_comment_end(self):
            pass

    class ParseState:
        DEFAULT = 0
        SHORT_COMMENT = 1
        LONG_COMMENT = 2
        STRING_CONSTANT = 3
        LONG_STRING_CONSTANT = 4

    def __init__(self, handler, **kwargs):
        super().__init__(**kwargs)
        self.handler = handler
        self.processors = {
                self.ParseState.DEFAULT: self.process_default,
                self.ParseState.SHORT_COMMENT: self.process_short_comment,
                self.ParseState.LONG_COMMENT: self.process_long_comment,
                self.ParseState.STRING_CONSTANT: self.process_string_constant,
                self.ParseState.LONG_STRING_CONSTANT: self.process_long_string_constant }

    def parse(self, inputfile):
        self.parse_state = self.ParseState.DEFAULT
        self.long_bracket_level = None
        self.escape = False
        self.block_line = None
        self.block_level = None
        self.string_quote = None
        self.process_lines(inputfile)
        if self.parse_state == self.ParseState.LONG_COMMENT:
            raise Exception('unterminated long comment beginning on line %d' % (self.block_line, ))
        if self.parse_state == self.ParseState.STRING_CONSTANT:
            raise Exception('unterminated string literal on line %d' % (self.input_line, ))
        if self.parse_state == self.ParseState.LONG_STRING_CONSTANT:
            raise Exception('unterminated long string literal beginning on line %d' % (self.block_line, ))

    def process_default(self, line):
        pos = 0
        length = len(line)
        while pos < length:
            ch = line[pos]
            if (ch == '"') or (ch == "'"):
                self.string_quote = ch
                self.parse_state = self.ParseState.STRING_CONSTANT
                self.long_bracket_level = None
                self.escape = False
                return pos + 1
            elif (ch == '-') and self.escape:
                self.parse_state = self.ParseState.SHORT_COMMENT
                self.long_bracket_level = None
                self.escape = False
                return pos + 1
            elif self.long_bracket_level is not None:
                if ch == '=':
                    self.long_bracket_level += 1
                elif ch == '[':
                    self.block_line = self.input_line
                    self.block_level = self.long_bracket_level
                    self.parse_state = self.ParseState.LONG_STRING_CONSTANT
                    self.long_bracket_level = None
                    self.escape = False
                    return pos + 1
                else:
                    self.long_bracket_level = None
            elif ch == '[':
                self.long_bracket_level = 0
            self.escape = ch == '-'
            pos += 1
        self.escape = False

    def process_short_comment(self, line):
        pos = 0
        length = len(line)
        while pos < length:
            ch = line[pos]
            if self.long_bracket_level is not None:
                if ch == '=':
                    self.long_bracket_level += 1
                elif ch == '[':
                    self.block_line = self.input_line
                    self.block_level = self.long_bracket_level
                    self.parse_state = self.ParseState.LONG_COMMENT
                    self.long_bracket_level = None
                    self.handler.long_comment_start(self.block_level)
                    return pos + 1
                else:
                    self.long_bracket_level = None
            elif ch == '[':
                self.long_bracket_level = 0
            if self.long_bracket_level is None:
                self.handler.short_comment(line[pos:])
                self.parse_state = self.ParseState.DEFAULT
                return None
            pos += 1
        self.handler.short_comment(line)
        self.parse_state = self.ParseState.DEFAULT

    def process_long_comment(self, line):
        pos = 0
        length = len(line)
        while pos < length:
            ch = line[pos]
            if self.long_bracket_level is not None:
                if ch == '=':
                    self.long_bracket_level += 1
                elif ch == ']':
                    if self.long_bracket_level == self.block_level:
                        if self.parse_state == self.ParseState.LONG_COMMENT:
                            self.handler.long_comment_line(line[:endpos])
                            self.handler.long_comment_end()
                        self.parse_state = self.ParseState.DEFAULT
                        return pos + 1
                    else:
                        self.long_bracket_level = 0
                else:
                    self.long_bracket_level = None
            elif ch == ']':
                endpos = pos
                self.long_bracket_level = 0
            pos += 1
        self.long_bracket_level = None
        self.handler.long_comment_line(line)

    def process_string_constant(self, line):
        pos = 0
        length = len(line)
        while pos < length:
            ch = line[pos]
            if (ch == self.string_quote) and not self.escape:
                self.parse_state = self.ParseState.DEFAULT
                return pos + 1
            self.escape = (ch == '\\') and not self.escape
            pos += 1
        if not self.escape:
            raise Exception('unterminated string literal on line %d' % (self.input_line, ))

    def process_long_string_constant(self, line):
        self.process_long_comment(line) # this works because they're both closed by a matching long bracket


class DriverFilter:
    DRIVER_CHARS = frozenset(
            [chr(x) for x in range(ord('0'), ord('9') + 1)] +
            [chr(x) for x in range(ord('a'), ord('z') + 1)] +
            ['_'])

    def parse_filter(self, root, path, sourcefile, inclusion, exclusion):
        def line_hook(text):
            text = text.strip()
            if text.startswith('#'):
                do_parse(os.path.join(os.path.dirname(n), text[1:].lstrip()))
            elif text.startswith('+'):
                text = text[1:].lstrip()
                if not text:
                    sys.stderr.write('%s:%s: Empty driver name\n' % (path, parser.input_line))
                    sys.exit(1)
                elif not all(x in self.DRIVER_CHARS for x in text):
                    sys.stderr.write('%s:%s: Invalid character in driver name "%s"\n' % (path, parser.input_line, text))
                    sys.exit(1)
                inclusion(text)
            elif text.startswith('-'):
                text = text[1:].lstrip()
                if not text:
                    sys.stderr.write('%s:%s: Empty driver name\n' % (path, parser.input_line))
                    sys.exit(1)
                elif not all(x in self.DRIVER_CHARS for x in text):
                    sys.stderr.write('%s:%s: Invalid character in driver name "%s"\n' % (path, parser.input_line, text))
                    sys.exit(1)
                exclusion(text)
            elif text:
                if (len(text) >= 2) and ((text[0] == '"') or (text[0] == "'")) and (text[0] == text[-1]):
                    text = text[1:-1]
                paths = glob.glob(os.path.join(basepath, *text.split('/')))
                if not paths:
                    sys.stderr.write('%s:%s: Pattern "%s" did not match any source files\n' % (path, parser.input_line, text))
                    sys.exit(1)
                for source in paths:
                    sourcefile('/'.join(path_components(os.path.relpath(source, basepath))))

        try:
            filterfile = io.open(path, 'r', encoding='utf-8')
        except IOError:
            sys.stderr.write('Unable to open filter file "%s"\n' % (path, ))
            sys.exit(1)
        with filterfile:
            basepath = os.path.join(root, 'src', 'mame')
            handler = CppParser.Handler()
            handler.line = line_hook
            parser = CppParser(handler)
            try:
                parser.parse(filterfile)
            except IOError:
                sys.stderr.write('Error reading filter file "%s"\n' % (path, ))
                sys.exit(1)
            except Exception as e:
                sys.stderr.write('Error parsing filter file "%s": %s\n' % (path, e))
                sys.exit(1)

    def parse_list(self, path, sourcefile, driver):
        def line_hook(text):
            text = text.strip()
            if text.startswith('#'):
                do_parse(os.path.join(os.path.dirname(n), text[1:].lstrip()))
            elif text.startswith('@'):
                parts = text[1:].lstrip().split(':', 1)
                parts[0] = parts[0].strip()
                if (parts[0] == 'source') and (len(parts) == 2):
                    parts[1] = parts[1].strip()
                    if not parts[1]:
                        sys.stderr.write('%s:%s: Empty source file name "%s"\n' % (path, parser.input_line, text))
                        sys.exit(1)
                    else:
                        sourcefile(parts[1])
                else:
                    sys.stderr.write('%s:%s: Unsupported directive "%s"\n' % (path, parser.input_line, text))
                    sys.exit(1)
            elif text:
                if not all(x in self.DRIVER_CHARS for x in text):
                    sys.stderr.write('%s:%s: Invalid character in driver name "%s"\n' % (path, parser.input_line, text))
                    sys.exit(1)
                else:
                    driver(text)

        try:
            listfile = io.open(path, 'r', encoding='utf-8')
        except IOError:
            sys.stderr.write('Unable to open list file "%s"\n' % (path, ))
            sys.exit(1)
        with listfile:
            handler = CppParser.Handler()
            handler.line = line_hook
            parser = CppParser(handler)
            try:
                parser.parse(listfile)
            except IOError:
                sys.stderr.write('Error reading list file "%s"\n' % (path, ))
                sys.exit(1)
            except Exception as e:
                sys.stderr.write('Error parsing list file "%s": %s\n' % (path, e))
                sys.exit(1)


class DriverLister(DriverFilter):
    def __init__(self, options, **kwargs):
        super().__init__(**kwargs)

        def includesource(filename):
            sources.add(filename)

        def includedriver(shortname):
            includes.add(shortname)
            excludes.discard(shortname)

        def excludedriver(shortname):
            includes.discard(shortname)
            excludes.add(shortname)

        def sourcefile(filename):
            if self.sources:
                state['includesrc'] = filename in self.sources

        def driver(shortname):
            if state['includesrc'] and (shortname not in self.excludes):
                drivers.add(shortname)

        sources = set()
        includes = set()
        excludes = set()
        if options.filter is not None:
            self.parse_filter(options.root, options.filter, includesource, includedriver, excludedriver)
            sys.stderr.write('%d source file(s) found: %s\n' % (len(sources), ', '.join(sorted(sources))))
        self.sources = frozenset(sources)
        self.includes = frozenset(includes)
        self.excludes = frozenset(excludes)

        drivers = set()
        state = { 'includesrc': True }
        self.parse_list(options.list, sourcefile, driver)

        for driver in self.includes:
            drivers.add(driver)
        sys.stderr.write('%d driver(s) found: %s\n' % (len(drivers), ', '.join(sorted(drivers))))
        drivers.add('___empty')
        self.drivers = sorted(drivers)

    def write_source(self, f):
        f.write(
                '#include "emu.h"\n' \
                '\n' \
                '#include "drivenum.h"\n' \
                '\n')
        for driver in self.drivers:
            f.write('GAME_EXTERN(%s);\n' % driver)
        f.write(
                '\n' \
                'game_driver const *const driver_list::s_drivers_sorted[%d] =\n' \
                '{\n' % (len(self.drivers), ))
        for driver in self.drivers:
            f.write('\t&GAME_NAME(%s),\n' % driver)
        f.write(
                '};\n' \
                '\n' \
                'std::size_t const driver_list::s_driver_count = %d;\n' % (len(self.drivers), ))


class DriverCollector(DriverFilter):
    def __init__(self, options, **kwargs):
        super().__init__(**kwargs)

        def includesource(filename):
            sources.add(filename)

        def includedriver(shortname):
            includes.add(shortname)

        def excludedriver(shortname):
            includes.discard(shortname)

        def sourcefile(filename):
            state['prevsource'] = filename

        def driver(shortname):
            if shortname in includes:
                sources.add(state['prevsource'])

        sources = set()
        includes = set()
        state = { 'prevsource': None }
        self.parse_filter(options.root, options.filter, includesource, includedriver, excludedriver)
        self.parse_list(options.list, sourcefile, driver)
        sys.stderr.write('%d source file(s) found\n' % (len(sources), ))
        self.sources = sorted(sources)


class DriverReconciler(DriverFilter):
    class InfoHandler:
        def __init__(self, drivers, **kwargs):
            super().__init__(**kwargs)
            self.drivers = drivers
            self.bad = False
            self.locator = None
            self.ignored_depth = 0
            self.in_document = False
            self.in_mame = False

        def startElement(self, name, attrs):
            if not self.in_document:
                raise xml.sax.SAXParseException('Unexpected start of element "%s"' % (name, ), None, self.locator)
            elif self.ignored_depth > 0:
                self.ignored_depth += 1
            elif not self.in_mame:
                if name != 'mame':
                    raise xml.sax.SAXParseException('Unexpected start of element "%s"' % (name, ), None, self.locator)
                self.in_mame = True
            elif name != 'machine':
                raise xml.sax.SAXParseException('Unexpected start of element "%s"' % (name, ), None, self.locator)
            else:
                runnable = attrs.get('runnable', 'yes')
                if runnable == 'yes':
                    shortname = attrs['name']
                    source = attrs['sourcefile'].replace('\\', '/')
                    declared = self.drivers.get(shortname)
                    if declared is None:
                        sys.stderr.write('Driver "%s" not declared in list file\n' % (shortname, ))
                        self.bad = True
                    elif declared != source:
                        sys.stderr.write('Driver "%s" found for source file "%s" but defined in source file "%s"\n' % (shortname, declared, source))
                        self.bad = True
                self.ignored_depth = 1

        def endElement(self, name):
            if self.ignored_depth > 0:
                self.ignored_depth -= 1
            elif self.in_mame:
                if name != 'mame':
                    raise xml.sax.SAXParseException('Unexpected end of element "%s"' % (name, ), None, self.locator)
                self.in_mame = False
            else:
                raise xml.sax.SAXParseException('Unexpected end of element "%s"' % (name, ), None, self.locator)

        def startDocument(self):
            if self.in_document:
                raise xml.sax.SAXParseException('Unexpected start of document', None, self.locator)
            self.in_document = True

        def endDocument(self):
            if not self.in_document:
                raise xml.sax.SAXParseException('Unexpected end of document', None, self.locator)
            self.in_document = False

        def setDocumentLocator(self, locator):
            self.locator = locator

        def startPrefixMapping(self, prefix, uri):
            pass

        def endPrefixMapping(self, prefix):
            pass

        def characters(self, content):
            pass

        def ignorableWhitespace(self, whitespace):
            pass

        def processingInstruction(self, target, data):
            pass


    def __init__(self, options, **kwargs):
        super().__init__(**kwargs)

        def sourcefile(filename):
            if (state['prevsource'] is not None) and (not state['prevdrivers']):
                sys.stderr.write('No drivers for source file "%s"\n' % (state['prevsource'], ))
                self.bad = True
            if filename in self.sources:
                sys.stderr.write('Duplicate source file "%s"\n' % (filename, ))
                state['prevdrivers'] = self.sources[filename]
                self.bad = True
            else:
                drivers = set()
                state['prevdrivers'] = drivers
                self.sources[filename] = drivers
            state['prevsource'] = filename

        def driver(shortname):
            if shortname in self.drivers:
                sys.stderr.write('Duplicate driver "%s" for source file "%s" (previously seen for source file "%s")\n' % (shortname, state['prevsource'], self.drivers[shortname]))
                self.bad = True
            else:
                self.drivers[shortname] = state['prevsource']
            drivers = state['prevdrivers']
            if drivers is None:
                sys.stderr.write('Driver "%s" found outside source file section\n' % (shortname, ))
                self.bad = True
            else:
                drivers.add(shortname)

        state = { 'prevsource': None, 'prevdrivers': None }
        self.bad = False
        self.sources = { }
        self.drivers = { }
        self.parse_list(options.list, sourcefile, driver)

    def reconcile_xml(self, xmlfile):
        handler = self.InfoHandler(self.drivers)
        try:
            xml.sax.parse(xmlfile, handler=handler)
            if handler.bad:
                self.bad = True
        except xml.sax.SAXException as err:
            sys.stderr.write('Error parsing system information file: %s\n' % (err, ))
            self.bad = True


def split_path(path):
    path = os.path.normpath(path)
    result = [ ]
    while True:
        dirname, basename = os.path.split(path)
        if dirname == path:
            result.insert(0, dirname)
            return result
        elif basename == path:
            result.insert(0, basename)
            return result
        else:
            result.insert(0, basename)
            path = dirname


def parse_command_line():
    parser = argparse.ArgumentParser()
    parser.add_argument('-r', '--root', metavar='<srcroot>', default='.', help='path to emulator source root (defaults to working directory)')
    subparsers = parser.add_subparsers(title='commands', dest='command', metavar='<command>')

    subparser = subparsers.add_parser('sourcesproject', help='generate project directives for source files')
    subparser.add_argument('-t', '--target', metavar='<target>', required=True, help='generated emulator target name')
    subparser.add_argument('-l', '--list', metavar='<lstfile>', required=True, help='master driver list file')
    subparser.add_argument('sources', metavar='<srcfile>', nargs='+', help='source files to include')

    subparser = subparsers.add_parser('driversproject', help='generate project directives for driver names')
    subparser.add_argument('-t', '--target', metavar='<target>', required=True, help='generated emulator target name')
    subparser.add_argument('-l', '--list', metavar='<lstfile>', required=True, help='master driver list file')
    subparser.add_argument('drivers', metavar='<driver>', nargs='+', help='driver names to include')

    subparser = subparsers.add_parser('filterproject', help='generate project directives using filter file')
    subparser.add_argument('-t', '--target', metavar='<target>', required=True, help='generated emulator target name')
    subparser.add_argument('-f', '--filter', metavar='<fltfile>', required=True, help='input filter file')
    subparser.add_argument('list', metavar='<lstfile>', help='input list file')

    subparser = subparsers.add_parser('sourcesfilter', help='generate driver filter for source files')
    subparser.add_argument('-l', '--list', metavar='<lstfile>', required=True, help='master driver list file')
    subparser.add_argument('sources', metavar='<srcfile>', nargs='+', help='source files to include')

    subparser = subparsers.add_parser('driversfilter', help='generate driver filter from driver names')
    subparser.add_argument('-l', '--list', metavar='<lstfile>', required=True, help='master driver list file')
    subparser.add_argument('drivers', metavar='<drivername>', nargs='+', help='driver names to include')

    subparser = subparsers.add_parser('driverlist', help='generate driver list source')
    subparser.add_argument('-f', '--filter', metavar='<fltfile>', help='input filter file')
    subparser.add_argument('list', metavar='<lstfile>', help='input list file')

    subparser = subparsers.add_parser('reconcilelist', help='reconcile driver list')
    subparser.add_argument('-l', '--list', metavar='<lstfile>', required=True, help='master driver list file')
    subparser.add_argument('infoxml', metavar='<xmlfile>', nargs='?', help='XML system information file')

    return parser.parse_args()


def collect_lua_directives(options):
    def short_comment_hook(text):
        if text.startswith('@'):
            name, action = text[1:].rstrip().rsplit(',', 1)
            if name not in result:
                result[name] = [ ]
            result[name].append(action)

    base = os.path.join(options.root, 'scripts', 'src')
    result = { }
    handler = LuaParser.Handler()
    handler.short_comment = short_comment_hook
    parser = LuaParser(handler)
    for name in ('bus', 'cpu', 'machine', 'sound', 'video', 'formats'):
        path = os.path.join(base, name + '.lua')
        try:
            f = io.open(path, 'r', encoding='utf-8')
        except IOError:
            sys.stderr.write('Unable to open source file "%s"\n' % (path, ))
            sys.exit(1)
        try:
            with f:
                parser.parse(f)
        except IOError:
            sys.stderr.write('Error reading source file "%s"\n' % (path, ))
            sys.exit(1)
        except Exception as e:
            sys.stderr.write('Error parsing source file "%s": %s\n' % (path, e))
            sys.exit(1)
    return result


def build_device_map(root):
    """Build maps of device class names and type constants to their source files
    Returns: (device_map, device_type_map)
        device_map: {class_name -> source_file}
        device_type_map: {TYPE_CONSTANT -> class_name}
    """
    device_map = {}
    device_type_map = {}

    # Scan all device source files for DEFINE_DEVICE_TYPE
    devices_dir = os.path.join(root, 'src', 'devices')
    if not os.path.isdir(devices_dir):
        return device_map, device_type_map

    import re
    device_type_re = re.compile(r'DEFINE_DEVICE_TYPE\s*\(\s*(\w+)\s*,\s*(\w+)\s*,')

    for dirpath, dirnames, filenames in os.walk(devices_dir):
        for filename in filenames:
            if filename.endswith('.cpp'):
                filepath = os.path.join(dirpath, filename)
                try:
                    with io.open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
                        content = f.read(50000)  # Read first 50KB
                        for match in device_type_re.finditer(content):
                            type_constant = match.group(1)
                            device_class = match.group(2)
                            # Store relative path from root
                            rel_path = os.path.relpath(filepath, root).replace(os.sep, '/')
                            device_map[device_class] = rel_path
                            device_type_map[type_constant] = device_class
                except:
                    pass

    return device_map, device_type_map

def find_inheritance_chain(device_class, device_map, seen_devices, root):
    """
    Find all parent classes in the inheritance chain for a device.
    Returns a list of (device_class, device_file) tuples.
    Does NOT modify seen_devices - caller handles that.
    """
    chain = []
    current_class = device_class
    checked_files = set()  # Track what we've checked in this chain to avoid loops

    # Follow inheritance chain (max depth 5 to avoid infinite loops)
    for depth in range(5):
        if current_class not in device_map:
            break
        device_file = device_map[current_class]
        # Skip if already in the build OR already checked in this chain
        if device_file in seen_devices or device_file in checked_files:
            break
        chain.append((current_class, device_file))
        checked_files.add(device_file)

        # Find parent class by reading the source file (try .h then .cpp)
        try:
            import re
            content = None
            # Try header file first (.h)
            header_path = os.path.splitext(device_file)[0] + '.h'
            full_header_path = os.path.join(root, header_path)
            if os.path.exists(full_header_path):
                with open(full_header_path, 'r') as f:
                    content = f.read()
            # If not found in header, try .cpp
            if not content:
                full_path = os.path.join(root, device_file)
                with open(full_path, 'r') as f:
                    content = f.read()

            # Look for class inheritance: class child : public parent
            class_match = re.search(r'class\s+' + re.escape(current_class) + r'\s*:\s*public\s+(\w+)', content)
            if class_match:
                current_class = class_match.group(1)
            else:
                break
        except:
            break

    return chain

def scan_source_dependencies(root, sources, smart=True, depth_limit=2):
    """
    Scan source dependencies with optional smart mode.

    smart=True: Only follow includes to limited depth, detect device usage
    smart=False: Original behavior (everything transitively)
    depth_limit: How many levels of #include to follow in smart mode
    """
    # Check if SMART_DEPS environment variable is set
    if os.getenv('SMART_DEPS') == '0':
        smart = False
    elif os.getenv('SMART_DEPS') == '1':
        smart = True

    # Convert sources to list if it's a generator (to allow multiple iterations)
    if not isinstance(sources, list):
        sources = list(sources)

    if not smart:
        # Fall back to original recursive behavior
        depth_limit = 999
    else:
        # Build device map for smart mode
        sys.stderr.write("Building device map for smart dependency resolution...\n")
        device_map, device_type_map = build_device_map(root)
        sys.stderr.write("  Found %d device types\n" % len(device_map))

        # Extract relevant bus systems from source files
        relevant_bus_systems = set()
        for source in sources:
            parts = source.split('/')
            # Source paths are like: src/mame/acorn/bbcb.cpp or acorn/bbcb.cpp
            # Find the manufacturer directory (after src/mame prefix if present)
            start_idx = 0
            if len(parts) > 0 and parts[0] == 'src':
                start_idx = 1
                if len(parts) > 1 and parts[1] == 'mame':
                    start_idx = 2

            if len(parts) > start_idx:
                # Add the manufacturer/system directory (e.g., 'acorn', 'midway', 'atari')
                relevant_bus_systems.add(parts[start_idx])
                # Add any explicit bus references (e.g., 'bus/bbc')
                for i, part in enumerate(parts):
                    if part == 'bus' and i + 1 < len(parts):
                        relevant_bus_systems.add(parts[i + 1])

        sys.stderr.write("  Relevant systems/buses: %s\n" % ', '.join(sorted(relevant_bus_systems)))

    def locate_include(path):
        split = [ ]
        forward = 0
        reverse = 0
        for part in path.split('/'):
            if part and (part != '.'):
                if part != '..':
                    forward += 1
                    split.append(part)
                elif forward:
                    split.pop()
                    forward -= 1
                else:
                    split.append(part)
                    reverse += 1
        split = tuple(split)
        for incdir, depth in roots:
            if (not depth) or (not reverse):
                components = incdir + split
                depth = depth + forward - 1
            elif depth >= reverse:
                components = incdir[:-reverse] + split[reverse:]
                depth = depth + forward - reverse - 1
            else:
                components = incdir[:-depth] + split[depth:]
                depth = forward - 1
            if os.path.isfile(os.path.join(root, *components)):
                return components, depth
        return None, 0

    def test_siblings(relative, basename, depth):
        pathbase = '/'.join(relative) + '/'
        dirname = os.path.join(root, *relative)
        for ext in ('.cpp', '.ipp', '.hxx'):
            path = pathbase + basename + ext
            if (path not in seen) and os.path.isfile(os.path.join(dirname, basename + ext)):
                remaining.append((path, depth))
                seen.add(path)

        # SMART MODE: Also include disassembler for CPU devices (only exact basename match)
        is_cpu_device = len(relative) >= 3 and relative[1] == 'devices' and relative[2] == 'cpu'
        if smart and is_cpu_device:
            # Check for common disassembler naming patterns based on basename
            for suffix in ('d', 'dasm', 'dis', 'disasm'):
                dasm_cpp = pathbase + basename + suffix + '.cpp'
                dasm_h = pathbase + basename + suffix + '.h'
                dasm_file = os.path.join(dirname, basename + suffix + '.cpp')

                if (dasm_cpp not in seen) and os.path.isfile(dasm_file):
                    # Add disassembler source - don't count toward depth limit
                    remaining.append((dasm_cpp, 0))  # depth=0 so it's always included
                    seen.add(dasm_cpp)

                    # Also add the header if it exists
                    if (dasm_h not in seen) and os.path.isfile(os.path.join(dirname, basename + suffix + '.h')):
                        seen.add(dasm_h)

        # SMART MODE: Also include format files for imagedev
        if smart and len(relative) >= 3 and relative[1] == 'devices' and relative[2] == 'imagedev':
            # Check for formats/*.cpp in lib/formats
            formats_dir = os.path.join(root, 'src', 'lib', 'formats')
            if os.path.isdir(formats_dir):
                # Add all.cpp which includes all formats
                formats_all = 'src/lib/formats/all.cpp'
                if formats_all not in seen:
                    seen.add(formats_all)
                    remaining.append((formats_all, depth))

    def line_hook(text):
        text = text.lstrip()
        if text.startswith('#'):
            text = text[1:].lstrip()
            if text.startswith('include'):
                text = text[7:]
                if text[:1].isspace():
                    text = text.strip()
                    if (len(text) > 2) and (text[0] == '"') and (text[-1] == '"'):
                        components, depth = locate_include(text[1:-1])
                        if components:
                            path = '/'.join(components)
                            if path not in seen:
                                seen.add(path)
                                base, ext = os.path.splitext(components[-1])

                                # ALWAYS call test_siblings for headers to find disassemblers/siblings
                                if ext.lower().startswith('.h'):
                                    components_dir = components[:-1]
                                    test_siblings(components_dir, base, depth)
                                    if components_dir[:2] == ('src', 'mame'):
                                        for aspect in ('_a', '_v', '_m'):
                                            test_siblings(components_dir, base + aspect, depth)

                                # SMART MODE: Check depth limit and bus relevance
                                if smart:
                                    # Check if this is a bus include from an unrelated system
                                    path_parts = components
                                    is_irrelevant_bus = False
                                    is_bus_file = len(path_parts) >= 3 and path_parts[1] == 'bus'

                                    if is_bus_file:
                                        bus_system = path_parts[2]
                                        # Skip bus systems that aren't in our relevant set
                                        if bus_system not in relevant_bus_systems:
                                            # Also check if it's a generic bus (like generic/slot) - keep those
                                            if bus_system not in ('generic', 'centronics', 'rs232', 'ata', 'scsi'):
                                                is_irrelevant_bus = True
                                                # Uncomment for debugging:
                                                print("  [SKIP] Irrelevant bus: %s (not in %s)" % (path, relevant_bus_systems), file=sys.stderr)

                                    # Use stricter depth limit for bus files (max depth 2) to prevent transitive dependencies
                                    effective_depth_limit = 2 if is_bus_file else depth_limit

                                    if is_irrelevant_bus:
                                        # Skip this unrelated bus
                                        pass
                                    elif depth > effective_depth_limit:
                                        # Too deep
                                        pass
                                    else:
                                        # Within depth limit and relevant - include it
                                        remaining.append((path, depth))
                                else:
                                    # Not smart mode - include everything
                                    remaining.append((path, depth))

    handler = CppParser.Handler()
    handler.line = line_hook
    parser = CppParser(handler)
    seen = set('/'.join(x for x in split_path(source) if x) for source in sources)
    remaining = list([(x, 0) for x in seen])
    default_roots = ((('src', 'devices'), 0), (('src', 'mame', 'shared'), 0), (('src', 'lib'), 0))

    # SMART MODE: For each initial source file, check if it's a CPU and add disassembler
    if smart:
        for source in list(seen):
            components = source.split('/')
            if len(components) >= 4 and components[1] == 'devices' and components[2] == 'cpu':
                # This is a CPU file - add its disassembler
                cpu_dir = '/'.join(components[:-1])
                base_name = components[-1].rsplit('.', 1)[0]  # Remove extension
                cpu_path_obj = os.path.join(root, *components[:-1])

                # Try common disassembler patterns: {name}d, {name}dasm, {name}dis
                for suffix in ('d', 'dasm', 'dis', 'disasm'):
                    for ext in ('.cpp', '.h', '.ipp'):
                        dasm_file = base_name + suffix + ext
                        dasm_path = cpu_dir + '/' + dasm_file
                        if dasm_path not in seen and os.path.isfile(os.path.join(cpu_path_obj, dasm_file)):
                            seen.add(dasm_path)
                            if ext == '.cpp':
                                remaining.append((dasm_path, 0))
                                sys.stderr.write('  Found disassembler: %s\n' % dasm_path)

        sys.stderr.write('Using SMART dependency resolution (depth_limit=%d)\n' % (depth_limit, ))

    # Device usage pattern (for smart mode)
    if smart:
        import re
        # Match device_finder<TYPE> or required_device<TYPE> or optional_device<TYPE> (including _array variants)
        device_finder_re = re.compile(r'(?:required_device(?:_array)?|optional_device(?:_array)?|device_finder)\s*<\s*(\w+)\s*[,>]')
        # Match device type references in option_add calls: option_add("name", DEVICE_TYPE)
        device_type_re = re.compile(r'option_add(?:_internal)?\s*\([^,]+,\s*([A-Z][A-Z0-9_]+)\s*\)')

    while remaining:
        source, depth = remaining.pop()
        components = tuple(source.split('/'))
        roots = ((components[:-1], depth), ) + default_roots
        try:
            f = io.open(os.path.join(root, *components), 'r', encoding='utf-8')
        except IOError:
            sys.stderr.write('Unable to open source file "%s"\n' % (source, ))
            sys.exit(1)

        file_content = None
        header_content = None
        try:
            with f:
                file_content = f.read()
                # If this is a .cpp file, also read the corresponding .h file
                if smart and source.endswith('.cpp'):
                    header_path = os.path.splitext(source)[0] + '.h'
                    try:
                        with io.open(os.path.join(root, header_path), 'r', encoding='utf-8', errors='ignore') as hf:
                            header_content = hf.read()
                    except:
                        pass

                # Scan for device usage in smart mode
                if smart and file_content:
                    # Scan for device_finder/required_device/optional_device patterns
                    for match in device_finder_re.finditer(file_content):
                        device_class = match.group(1)
                        if device_class in device_map:
                            device_file = device_map[device_class]
                            # Scan the device file itself for option_add calls BEFORE following inheritance
                            try:
                                full_device_path = os.path.join(root, device_file)
                                with io.open(full_device_path, 'r', encoding='utf-8', errors='ignore') as df:
                                    device_file_content = df.read()
                                    for type_match in device_type_re.finditer(device_file_content):
                                        device_type_constant = type_match.group(1)
                                        if device_type_constant in device_type_map:
                                            type_device_class = device_type_map[device_type_constant]
                                            if type_device_class in device_map:
                                                type_device_file = device_map[type_device_class]
                                                if type_device_file not in seen:
                                                    seen.add(type_device_file)
                                                    remaining.append((type_device_file, 0))
                                                    sys.stderr.write('  + DeviceType: %s (%s) -> %s (option_add in %s)\n' % (device_type_constant, type_device_class, type_device_file, device_file))
                            except:
                                pass

                            # Follow inheritance chain to include parent classes
                            inheritance_chain = find_inheritance_chain(device_class, device_map, seen, root)
                            for parent_class, parent_file in inheritance_chain:
                                if parent_file not in seen:
                                    seen.add(parent_file)
                                    remaining.append((parent_file, 0))  # Add at depth 0
                                    # Show which file triggered this device addition
                                    if parent_class == device_class:
                                        sys.stderr.write('  + Device: %s -> %s (referenced by %s)\n' % (parent_class, parent_file, source))
                                    else:
                                        sys.stderr.write('  + Device: %s -> %s (parent of %s referenced by %s)\n' % (parent_class, parent_file, device_class, source))

                    # Scan for device type references in option_add calls
                    for match in device_type_re.finditer(file_content):
                        device_type_constant = match.group(1)
                        # Look up the class name from the constant
                        if device_type_constant in device_type_map:
                            device_class = device_type_map[device_type_constant]
                            if device_class in device_map:
                                device_file = device_map[device_class]
                                if device_file not in seen:
                                    seen.add(device_file)
                                    remaining.append((device_file, 0))
                                    sys.stderr.write('  + DeviceType: %s (%s) -> %s (option_add in %s)\n' % (device_type_constant, device_class, device_file, source))

                    # Also scan the header file for device patterns
                    if header_content:
                        for match in device_finder_re.finditer(header_content):
                            device_class = match.group(1)
                            if device_class in device_map:
                                device_file = device_map[device_class]
                                # Follow inheritance chain to include parent classes
                                inheritance_chain = find_inheritance_chain(device_class, device_map, seen, root)
                                for parent_class, parent_file in inheritance_chain:
                                    if parent_file not in seen:
                                        seen.add(parent_file)
                                        remaining.append((parent_file, 0))
                                        header_path = os.path.splitext(source)[0] + '.h'
                                        if parent_class == device_class:
                                            sys.stderr.write('  + Device: %s -> %s (referenced by %s)\n' % (parent_class, parent_file, header_path))
                                        else:
                                            sys.stderr.write('  + Device: %s -> %s (parent of %s referenced by %s)\n' % (parent_class, parent_file, device_class, header_path))
        except IOError:
            sys.stderr.write('Error reading source file "%s"\n' % (source, ))
            sys.exit(1)
        except Exception as e:
            sys.stderr.write('Error scanning source file "%s": %s\n' % (source, e))

        # Now parse for includes
        if file_content:
            try:
                import io as io_module
                parser.parse(io_module.StringIO(file_content))
            except Exception as e:
                sys.stderr.write('Error parsing source file "%s": %s\n' % (source, e))
                sys.exit(1)

    if smart:
        sys.stderr.write('Smart scan found %d files (vs ~thousands with full transitive scan)\n' % (len(seen), ))

    return seen


def write_project(options, projectfile, mappings, sources, single):
    if single:
        targetsrc = ''
        written_directives = set()  # Track written BUSES/directives to avoid duplicates
        for source in sorted(sources):
            action = mappings.get(source)
            if action:
                for line in action:
                    if line not in written_directives:
                        projectfile.write(line + '\n')
                        written_directives.add(line)
            if source.startswith('src/mame/'):
                targetsrc += '        MAME_DIR .. "%s",\n' % (source, )
        projectfile.write(
                '\n' \
                'function createProjects_mame_%s(_target, _subtarget)\n' \
                '    project ("mame_%s")\n' \
                '    targetsubdir(_target .."_" .. _subtarget)\n' \
                '    kind (LIBTYPE)\n' \
                '    uuid (os.uuid("drv-mame-%s"))\n' \
                '    addprojectflags()\n' \
                '    \n' \
                '    includedirs {\n' \
                '        MAME_DIR .. "src/osd",\n' \
                '        MAME_DIR .. "src/emu",\n' \
                '        MAME_DIR .. "src/devices",\n' \
                '        MAME_DIR .. "src/mame/shared",\n' \
                '        MAME_DIR .. "src/lib",\n' \
                '        MAME_DIR .. "src/lib/util",\n' \
                '        MAME_DIR .. "src/lib/netlist",\n' \
                '        MAME_DIR .. "3rdparty",\n' \
                '        GEN_DIR  .. "mame/layout",\n' \
                '        ext_includedir("asio"),\n' \
                '        ext_includedir("flac"),\n' \
                '        ext_includedir("glm"),\n' \
                '        ext_includedir("jpeg"),\n' \
                '        ext_includedir("rapidjson"),\n' \
                '        ext_includedir("zlib"),\n' \
                '    }\n' \
                '\n' \
                '    files{\n%s' \
                '    }\n' \
                'end\n' \
                '\n' \
                'function linkProjects_mame_%s(_target, _subtarget)\n' \
                '    links {\n' \
                '        "mame_%s",\n' \
                '    }\n' \
                'end\n' % (options.target, options.target, options.target, targetsrc, options.target, options.target))
    else:
        libraries = { }
        for source in sorted(sources):
            components = source.split('/')
            if (len(components) > 3) and (components[:2] == ['src', 'mame']):
                line = '        MAME_DIR .. "%s",\n' % (source, )
                liblines = libraries.get(components[2])
                if liblines is not None:
                    liblines.append(line)
                else:
                    libraries[components[2]] = [line]
            action = mappings.get(source)
            if action:
                for line in action:
                    projectfile.write(line + '\n')
        libnames = sorted(libraries.keys())
        projectfile.write(
                '\n' \
                'function createMAMEProjects(_target, _subtarget, _name)\n' \
                '    project (_name)\n' \
                '    targetsubdir(_target .."_" .. _subtarget)\n' \
                '    kind (LIBTYPE)\n' \
                '    uuid (os.uuid("drv-" .. _target .. "_" .. _subtarget .. "-" .. _name))\n' \
                '    addprojectflags()\n' \
                '    \n' \
                '    includedirs {\n' \
                '        MAME_DIR .. "src/osd",\n' \
                '        MAME_DIR .. "src/emu",\n' \
                '        MAME_DIR .. "src/devices",\n' \
                '        MAME_DIR .. "src/mame/shared",\n' \
                '        MAME_DIR .. "src/lib",\n' \
                '        MAME_DIR .. "src/lib/util",\n' \
                '        MAME_DIR .. "src/lib/netlist",\n' \
                '        MAME_DIR .. "3rdparty",\n' \
                '        GEN_DIR  .. "mame/layout",\n' \
                '        ext_includedir("asio"),\n' \
                '        ext_includedir("flac"),\n' \
                '        ext_includedir("glm"),\n' \
                '        ext_includedir("jpeg"),\n' \
                '        ext_includedir("rapidjson"),\n' \
                '        ext_includedir("zlib"),\n' \
                '    }\n' \
                'end\n' \
                '\n' \
                'function linkProjects_mame_%s(_target, _subtarget)\n' \
                '    links {\n' % (options.target, ))
        for lib in libnames:
            if lib != 'shared':
                projectfile.write('        "%s",\n' % (lib, ))
        if 'shared' in libraries:
            projectfile.write('        "shared",\n')
        projectfile.write(
                '    }\n' \
                'end\n' \
                '\n' \
                'function createProjects_mame_%s(_target, _subtarget)\n' \
                '\n' % (options.target, ))
        for lib in libnames:
            projectfile.write(
                    'createMAMEProjects(_target, _subtarget, "%s")\n' \
                    'files {\n' % (lib, ))
            for line in libraries[lib]:
                projectfile.write(line)
            projectfile.write('}\n\n')
        projectfile.write('end\n')


def collect_sources(root, sources):
    result = [ ]
    for source in sources:
        fullpath = os.path.join(root, source)
        if os.path.isdir(fullpath):
            for subdir, dirs, files in os.walk(fullpath):
                for candidate in files:
                    if os.path.splitext(candidate)[1] == '.cpp':
                        if subdir != fullpath:
                            result.append(os.path.join(source, os.path.relpath(subdir, fullpath), candidate))
                        else:
                            result.append(os.path.join(source, candidate))
        else:
            result.append(source)
    return result


def map_drivers_to_sources(listfile, drivers):
    """
    Map driver names to their source files by parsing mame.lst.
    Returns a list of source file paths (e.g., ['atari/starwars.cpp']).
    """
    driver_to_source = {}
    current_source = None

    try:
        with io.open(listfile, 'r', encoding='utf-8') as f:
            for line in f:
                line = line.strip()
                # Lines starting with @source: define the current source file
                if line.startswith('@source:'):
                    current_source = line.split(':', 1)[1].strip()
                # Non-empty lines without @ are driver names
                elif line and not line.startswith('@') and not line.startswith('#'):
                    if current_source:
                        driver_to_source[line] = current_source
    except IOError:
        sys.stderr.write('Error reading driver list file "%s"\n' % listfile)
        sys.exit(1)

    # Map requested drivers to sources
    sources = []
    missing_drivers = []
    for driver in drivers:
        if driver in driver_to_source:
            source = driver_to_source[driver]
            if source not in sources:
                sources.append(source)
        else:
            missing_drivers.append(driver)

    if missing_drivers:
        sys.stderr.write('Error: Driver(s) not found in %s: %s\n' % (listfile, ', '.join(missing_drivers)))
        sys.stderr.write('Available drivers can be listed with: grep -v "^@" %s | grep -v "^#" | sort\n' % listfile)
        sys.exit(1)

    return sources


def write_drivers_project(options, projectfile):
    """Generate project for driver names (convenience wrapper)."""
    # Map driver names to source files
    sources = map_drivers_to_sources(options.list, options.drivers)

    # Convert to full paths
    full_sources = []
    for source in sources:
        full_path = os.path.join('src', 'mame', source)
        full_sources.append(full_path)

    sys.stderr.write("Drivers: %s\n" % ', '.join(options.drivers))
    sys.stderr.write("Sources: %s\n" % ', '.join(sources))

    # Reuse sourcesproject logic
    options.sources = full_sources
    write_sources_project(options, projectfile)


def write_sources_project(options, projectfile):
    def sourcefile(filename):
        if tuple(filename.split('/')) in splitsources:
            state['havedrivers'] = True

    def driver(shortname):
        pass

    header_to_optional = collect_lua_directives(options)
    sources = collect_sources(options.root, options.sources)
    splitsources = frozenset(s[2:] for s in (path_components(s) for s in sources) if s[:2] == ('src', 'mame'))
    state = { 'havedrivers': False }
    DriverFilter().parse_list(options.list, sourcefile, driver)
    if not state['havedrivers']:
        sys.stderr.write('None of the specified source files contain system drivers\n')
        sys.exit(1)
    source_dependencies = scan_source_dependencies(options.root, sources)
    write_project(options, projectfile, header_to_optional, source_dependencies, True)


def write_filter_project(options, projectfile):
    header_to_optional = collect_lua_directives(options)
    sources = DriverCollector(options).sources
    source_dependencies = scan_source_dependencies(options.root, (os.path.join('src', 'mame', *n.split('/')) for n in sources))
    write_project(options, projectfile, header_to_optional, source_dependencies, False)


def write_sources_filter(options, filterfile):
    sources = set()
    DriverFilter().parse_list(options.list, lambda n: sources.add(n), lambda n: None)

    drivers = set()
    for source in collect_sources(options.root, options.sources):
        components = tuple(x for x in split_path(source) if x)
        if (len(components) > 3) and (components[:2] == ('src', 'mame')):
            ext = os.path.splitext(components[-1])[1].lower()
            if ext.startswith('.c'):
                if '/'.join(components[2:]) in sources:
                    drivers.add('/'.join(components[2:]))
    for driver in sorted(drivers):
        filterfile.write(driver + '\n')


def write_drivers_filter(options, filterfile):
    """
    Generate a driver filter (.flt) file from driver names.
    Maps driver names to their source files and outputs them.
    """
    sources = map_drivers_to_sources(options.list, options.drivers)
    for source in sorted(sources):
        filterfile.write(source + '\n')


if __name__ == '__main__':
    options = parse_command_line()
    if options.command == 'sourcesproject':
        write_sources_project(options, sys.stdout)
    elif options.command == 'driversproject':
        write_drivers_project(options, sys.stdout)
    elif options.command == 'filterproject':
        write_filter_project(options, sys.stdout)
    elif options.command == 'sourcesfilter':
        write_sources_filter(options, sys.stdout)
    elif options.command == 'driversfilter':
        write_drivers_filter(options, sys.stdout)
    elif options.command == 'driverlist':
        DriverLister(options).write_source(sys.stdout)
    elif options.command == 'reconcilelist':
        reconciler = DriverReconciler(options)
        if options.infoxml == '-':
            reconciler.reconcile_xml(sys.stdin)
        elif options.infoxml is not None:
            try:
                xmlfile = io.open(options.infoxml, 'rb')
                with xmlfile:
                    reconciler.reconcile_xml(xmlfile)
            except IOError:
                sys.stderr.write('Unable to open system information file "%s"\n' % (options.infoxml, ))
                sys.exit(1)
        if reconciler.bad:
            sys.exit(1)
