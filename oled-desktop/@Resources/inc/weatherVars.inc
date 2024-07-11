[Variables]
;-- API Variables --;
Location                = Rotterdam

; UnitGroup options are: "us", "metric", "uk" and "base"
; - https://www.visualcrossing.com/resources/documentation/weather-api/unit-groups-and-measurement-units/
UnitGroup               = metric

; URL broken down in parts
UrlBase                 = https://weather.visualcrossing.com/VisualCrossingWebServices/rest/services/timeline/#Location#/next3days
P1                      = "unitGroup=#UnitGroup#"
P2                      = "elements=datetime%2CdatetimeEpoch%2Cname%2Ctempmax%2Ctempmin%2Ctemp%2Cconditions%2Cdescription%2Cicon"
P3                      = "include=days%2Calerts%2Ccurrent"
P4                      = "key=#ApiKey#"
P5                      = "contentType=json"
P6                      = "iconSet=icons2"

; Settings
LastRefresh             =13365220517
RefreshEveryXMins       = 15
RefreshEveryXSecs       = (#RefreshEveryXMins# * 60) + 4
RefreshFlashStart       = 0

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
CurTemp                 =14
CurIcon                 =partly-cloudy-night

D1MaxTemp               =17
D1MinTemp               =14
D1Icon                  =rain
D1DateString            =Fri.#CRLF#12 Jul
D1Tooltip               = None

D2MaxTemp               =17
D2MinTemp               =14
D2Icon                  =showers-day
D2DateString            =Sat.#CRLF#13 Jul
D2Tooltip               = None

D3MaxTemp               =20
D3MinTemp               =14
D3Icon                  =partly-cloudy-day
D3DateString            =Sun.#CRLF#14 Jul
D3Tooltip               = None

D4MaxTemp               =25
D4MinTemp               =14
D4Icon                  =showers-day
D4DateString            =Mon.#CRLF#15 Jul
D4Tooltip               = None

