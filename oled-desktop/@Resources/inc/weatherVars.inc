[Variables]
;-- API Variables --;
Location                = Rotterdam
;UnitGroup options are: "us", "metric", "uk" and "base" - https://www.visualcrossing.com/resources/documentation/weather-api/unit-groups-and-measurement-units/
UnitGroup               = metric
WeatherObject           ={"queryCost":1,"latitude":51.9144,"longitude":4.48717,"resolvedAddress":"Rotterdam, Zuid-Holland, Nederland","address":"Rotterdam","timezone":"Europe/Amsterdam","tzoffset":2.0,"days":[{"datetime":"2024-07-11","datetimeEpoch":1720648800,"tempmax":20.3,"tempmin":14.9,"temp":17.5,"conditions":"Partially cloudy","description":"Partly cloudy throughout the day.","icon":"partly-cloudy-day"},{"datetime":"2024-07-12","datetimeEpoch":1720735200,"tempmax":16.9,"tempmin":14.2,"temp":15.2,"conditions":"Rain, Overcast","description":"Cloudy skies throughout the day with rain in the morning and afternoon.","icon":"rain"},{"datetime":"2024-07-13","datetimeEpoch":1720821600,"tempmax":17.2,"tempmin":14.3,"temp":15.7,"conditions":"Rain, Partially cloudy","description":"Partly cloudy throughout the day with rain clearing later.","icon":"showers-day"},{"datetime":"2024-07-14","datetimeEpoch":1720908000,"tempmax":20.1,"tempmin":14.3,"temp":16.9,"conditions":"Partially cloudy","description":"Partly cloudy throughout the day.","icon":"partly-cloudy-day"}],"alerts":[],"currentConditions":{"datetime":"15:43:00","datetimeEpoch":1720705380,"temp":20.2,"conditions":"Partially cloudy","icon":"partly-cloudy-day"}}
LastRefresh             =13365187501
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

