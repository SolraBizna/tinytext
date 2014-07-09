if #arg ~= 2 then
   print("usage: decoder2lua input.data.json output.data.lua")
   os.exit(1)
end

local decoder = assert(io.open(arg[1],"rb")):read("*a")
local out = assert(io.open(arg[2],"wb"))
out:write("return "..decoder:gsub("\"([a-z]+)\":", "%1="):gsub("[][]",{["["]="{",["]"]="}"}))
