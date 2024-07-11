-- Activate widgets on startup
function Initialize()
	local states_file_path = SELF:GetOption("StatesPath")
	local widgets_path = SELF:GetOption("WidgetsPath")
	local widget_states = ReadIni(states_file_path)["variables"]

	for widget, state in pairs(widget_states) do
		local widget_ini = widget:capitalize()
		local widget_name = widget_ini:noIni()
		local widget_path = widgets_path .. widget_name

		if state == "1" then
			SKIN:Bang("!ActivateConfig", widget_path, widget_ini)
		end
	end
end

function Toggle(widget)
	local states_file_path = SELF:GetOption("StatesPath")
	local widgets_path = SELF:GetOption("WidgetsPath")
	local widget_ini = widget .. ".ini"

	local widget_state = ReadIni(states_file_path)["variables"][widget:lower() .. ".ini"]

	if widget_state == "0" then
		SKIN:Bang("!SetOption", "Button" .. widget, "ButtonImage", widget:lower() .. "-1.png")
		SKIN:Bang("!WriteKeyValue", "Variables", widget_ini, "1", states_file_path)
		SKIN:Bang("!ActivateConfig", widgets_path .. widget, widget_ini)
		SKIN:Bang("!ShowFade", widgets_path .. widget)
	else
		SKIN:Bang("!SetOption", "Button" .. widget, "ButtonImage", widget:lower() .. "-0.png")
		SKIN:Bang("!WriteKeyValue", "Variables", widget_ini, "0", states_file_path)
		SKIN:Bang("!HideFade", widgets_path .. widget)
		SKIN:Bang("!DeactivateConfig", widgets_path .. widget)
	end
end

function ReadIni(inputfile)
	local file = assert(io.open(inputfile, "r"), "Unable to open " .. inputfile)
	local tbl, section = {}, ""
	local num = 0
	for line in file:lines() do
		num = num + 1
		if not line:match("^%s-;") then
			local key, command = line:match("^([^=]+)=(.+)")
			if line:match("^%s-%[.+") then
				section = line:match("^%s-%[([^%]]+)"):lower()
				if not tbl[section] then
					tbl[section] = {}
				end
			elseif key and command and section then
				tbl[section][key:lower():match("^%s*(%S*)%s*$")] = command:match("^%s*(.-)%s*$")
			elseif #line > 0 and section and not key or command then
				print(num .. ": Invalid property or value.")
			end
		end
	end
	if not section then
		print("No sections found in " .. inputfile)
	end
	file:close()
	return tbl
end

function string.capitalize(str)
	return str:gsub("^%l", string.upper)
end

function string.noIni(str)
	return str:gsub("%.ini$", "")
end
