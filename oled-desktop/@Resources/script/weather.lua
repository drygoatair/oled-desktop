function Round(num)
	if num == nil or type(num) ~= "number" then
		return 0
	end
	return math.floor(num + 0.5)
end

function SetWeatherVariables(weatherData, lastRefresh)
	-- Load json.lua and decode JSON object
	local json = dofile(SKIN:GetVariable("@") .. "script\\json.lua")
	local weatherObject = json.decode(weatherData)

	-- Get paths
	local wthrVars = SKIN:GetVariable("@") .. "inc\\weatherVars.inc"
	local wthrCnfg = SKIN:GetVariable("WthrCnfg")

	-- Create table of weather variables
	local variablesTable = {
		["LastRefresh"] = lastRefresh,
		["CurTemp"] = Round(weatherObject.currentConditions.temp),
		["CurIcon"] = weatherObject.currentConditions.icon,
	}
	for fi = 1, 4 do
		variablesTable[string.format("D%uMaxTemp", fi)] = Round(weatherObject.days[fi].tempmax)
		variablesTable[string.format("D%uMinTemp", fi)] = Round(weatherObject.days[fi].tempmin)
		variablesTable[string.format("D%uIcon", fi)] = weatherObject.days[fi].icon
		variablesTable[string.format("D%uDateString", fi)] = string.format(
			"%s#CRLF#%s",
			os.date("%a.", weatherObject.days[fi].datetimeEpoch),
			os.date("%e %b", weatherObject.days[fi].datetimeEpoch)
		)
	end

	-- Set weather variables and write to variables file
	for key, value in pairs(variablesTable) do
		SKIN:Bang("!SetVariable", key, value, wthrCnfg)
		-- Escape #CRLF# variables
		value = string.gsub(value, "#CRLF#", "#*CRLF*#")
		SKIN:Bang("!WriteKeyValue", "Variables", key, value, wthrVars)
	end
end
