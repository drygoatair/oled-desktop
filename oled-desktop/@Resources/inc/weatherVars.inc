[Variables]
;-- API Variables --;
Location                = Rotterdam
;UnitGroup options are: "us", "metric", "uk" and "base" - https://www.visualcrossing.com/resources/documentation/weather-api/unit-groups-and-measurement-units/
UnitGroup               = metric
WeatherObject           ={"queryCost":1,"latitude":51.9144,"longitude":4.48717,"resolvedAddress":"Rotterdam, Zuid-Holland, Nederland","address":"Rotterdam","timezone":"Europe/Amsterdam","tzoffset":2.0,"days":[{"datetime":"2024-07-10","datetimeEpoch":1720562400,"tempmax":21.0,"tempmin":16.9,"temp":18.9,"conditions":"Rain, Partially cloudy","description":"Partly cloudy throughout the day with rain in the morning and afternoon.","icon":"showers-day"},{"datetime":"2024-07-11","datetimeEpoch":1720648800,"tempmax":20.6,"tempmin":14.6,"temp":17.6,"conditions":"Partially cloudy","description":"Partly cloudy throughout the day.","icon":"partly-cloudy-day"},{"datetime":"2024-07-12","datetimeEpoch":1720735200,"tempmax":15.7,"tempmin":13.8,"temp":14.7,"conditions":"Rain, Overcast","description":"Cloudy skies throughout the day with rain in the morning and afternoon.","icon":"rain"},{"datetime":"2024-07-13","datetimeEpoch":1720821600,"tempmax":16.0,"tempmin":14.3,"temp":15.1,"conditions":"Rain, Overcast","description":"Cloudy skies throughout the day with a chance of rain throughout the day.","icon":"rain"}],"alerts":[],"currentConditions":{"datetime":"21:55:00","datetimeEpoch":1720641300,"temp":17.9,"conditions":"Partially cloudy","icon":"partly-cloudy-day"}}
LastRefresh             =13365123449
RefreshEveryXMins       = 15

;-- Styling --;
FontFace                = Share Tech Mono
FontColor               = 255,255,255,255
FontEffectColor         = 0,0,0,150
FontWidthMultiplyer     = 1.6
FontWidth               = 0.5

;-- Widget dimensions --;
GapSize                 = 20

CurrentDayIconSize      = 100
CurrentDayFontSize      = 32

ForecastDateFontSize    = 14
ForecastIconSize        = 75

LargeIconSize           = 32
SmallIconSize           = 32

ForecastStringFontS     = [#ForecastDateFontSize] * [#SizeMultiplyer]
ForecastStringFontW     = [#ForecastStringFontS] * [#FontWidth]
ForecastStringH         = [#ForecastStringFontS] * (2 + (2 / 3))

ForecastIconS           = [#ForecastIconSize] * [#SizeMultiplyer]
ForecastColumnW         = (#ForecastIconS# > (((#ForecastStringFontW#*6)*(#FontWidthMultiplyer#))+1) ? [#ForecastIconS] : (((#ForecastStringFontW#*6)*(#FontWidthMultiplyer#))+1))
ForecastColumnH         = ([#ForecastStringH] * 2) + [#ForecastIconS] + ([#GapSize] * 2)

CurrentDayIconS         = [#CurrentDayIconSize] * [#SizeMultiplyer]
CurrentDayFontS         = [#CurrentDayFontSize] * [#SizeMultiplyer]
CurrentDayRowH          = (#CurrentDayIconS# > ([#CurrentDayFontS] * 1.5) ? #CurrentDayIconS# : ([#CurrentDayFontS] * 1.5))

WidgetNetW              = ([#ForecastColumnW] * 4) + ([#GapSize] * 3)
WidgetW                 = [#WidgetNetW] + ([#Margin] * 2)
WidgetNetH              = [#CurrentDayRowH] + [#ForecastColumnH] + [#GapSize]
WidgetH                 = [#WidgetNetH] + ([#Margin] * 2)

;-- Weather data variables --;
CurTemp                 = 0
CurIcon                 = "unknown"

D1MaxTemp               = 0
D1MinTemp               = 0
D1Icon                  = "unknown"
D1DateString            = "Thu#CRLF#1 Jan"
D1Tooltip               = None

D2MaxTemp               = 0
D2MinTemp               = 0
D2Icon                  = "unknown"
D2DateString            = "Fri#CRLF#2 Jan"
D2Tooltip               = None

D3MaxTemp               = 0
D3MinTemp               = 0
D3Icon                  = "unknown"
D3DateString            = "Sat#CRLF#3 Jan"
D3Tooltip               = None

D4MaxTemp               = 0
D4MinTemp               = 0
D4Icon                  = "unknown"
D4DateString            = "Sun#CRLF#4 Jan"
D4Tooltip               = None

