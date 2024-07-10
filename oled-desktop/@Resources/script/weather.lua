function Initialize()
    SetWeatherVariables()
end

function Round(num)
    if num == nil or type(num) ~= "number" then
        return 0
    end
    return math.floor(num + 0.5)
end

function SetWeatherVariables()
    local json = dofile(SKIN:GetVariable('@') .. 'script\\json.lua')

    local weatherData = SKIN:GetVariable("WeatherObject")
    local weatherObject = json.decode(weatherData)

    SKIN:Bang("!SetVariable", "CurTemp", Round(weatherObject.currentConditions.temp))
    SKIN:Bang("!SetVariable", "CurIcon", weatherObject.currentConditions.icon)

    for fi = 1, 4 do
        SKIN:Bang("!SetVariable", string.format("D%uMaxTemp", fi), Round(weatherObject.days[fi].tempmax))
        SKIN:Bang("!SetVariable", string.format("D%uMinTemp", fi), Round(weatherObject.days[fi].tempmin))
        SKIN:Bang("!SetVariable", string.format("D%uIcon", fi), weatherObject.days[fi].icon)
        SKIN:Bang(
            "!SetVariable",
            string.format("D%uDateString", fi),
            string.format(
                "%s#CRLF#%s",
                os.date("%a.", weatherObject.days[fi].datetimeEpoch),
                os.date("%e %b", weatherObject.days[fi].datetimeEpoch)
            )
        )
        SKIN:Bang("!SetVariable", string.format("D%uTooltip", fi), weatherObject.days[fi].description)
    end
end

-- function MakeWeatherObject()
--     local json = dofile(SKIN:MakePathAbsolute('json.lua'))
--     local currentTime = os.time()
--     local days = {}
--     for i = 1, 4 do
--         local day = {
--             datetime = os.date("%Y-%m-%d", currentTime + i * 86400),
--             datetimeEpoch = currentTime + i * 86400,
--             tempmax = 0,
--             tempmin = 0,
--             temp = 0,
--             conditions = "",
--             description = "",
--             icon = "unknown"
--         }
--         table.insert(days, day)
--     end
--     local weatherObject = {
--         queryCost = 1,
--         latitude = 0,
--         longitude = 0,
--         resolvedAddress = "",
--         address = "",
--         timezone = "",
--         tzoffset = 0.0,
--         days = days,
--         currentConditions = {
--             datetime = os.date("%H:%M:%S", currentTime),
--             datetimeEpoch = currentTime,
--             temp = 0,
--             conditions = "",
--             icon = "unknown"
--         }
--     }
--     return json.encode(weatherObject)
-- end
