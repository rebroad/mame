emu.register_frame(function()
  if emu.framecount() == 60 then
    emu.keypost('5')
  elseif emu.framecount() == 120 then
    emu.keypost('1')
  end
end)
