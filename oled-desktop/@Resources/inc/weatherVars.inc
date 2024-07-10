[Variables]
;-- API Variables --;
Location=Rotterdam
;UnitGroup options are: "us", "metric", "uk" and "base" - https://www.visualcrossing.com/resources/documentation/weather-api/unit-groups-and-measurement-units/
UnitGroup=metric
WeatherObject={"queryCost":1,"latitude":51.9144,"longitude":4.48717,"resolvedAddress":"Rotterdam, Zuid-Holland, Nederland","address":"Rotterdam","timezone":"Europe/Amsterdam","tzoffset":2.0,"days":[{"datetime":"2024-07-10","datetimeEpoch":1720562400,"tempmax":21.8,"tempmin":16.7,"temp":18.8,"conditions":"Rain, Partially cloudy","description":"Partly cloudy throughout the day with a chance of rain throughout the day.","icon":"showers-day"},{"datetime":"2024-07-11","datetimeEpoch":1720648800,"tempmax":20.9,"tempmin":14.0,"temp":17.4,"conditions":"Partially cloudy","description":"Partly cloudy throughout the day.","icon":"partly-cloudy-day"},{"datetime":"2024-07-12","datetimeEpoch":1720735200,"tempmax":18.2,"tempmin":14.6,"temp":16.1,"conditions":"Rain, Overcast","description":"Cloudy skies throughout the day with a chance of rain.","icon":"rain"},{"datetime":"2024-07-13","datetimeEpoch":1720821600,"tempmax":17.0,"tempmin":14.7,"temp":16.0,"conditions":"Rain, Overcast","description":"Cloudy skies throughout the day with a chance of rain throughout the day.","icon":"rain"}],"alerts":[],"currentConditions":{"datetime":"07:25:00","datetimeEpoch":1720589100,"temp":17.8,"conditions":"Partially cloudy","icon":"partly-cloudy-day"}}
LastRefresh=13365071958
RefreshEveryXMins=15

; UrlTemplate=https://weather.visualcrossing.com/VisualCrossingWebServices/rest/services/timeline/Rotterdam/next3days?unitGroup=metric&elements=datetime%2CdatetimeEpoch%2Cname%2Ctempmax%2Ctempmin%2Ctemp%2Cconditions%2Cdescription%2Cicon&include=days%2Calerts%2Ccurrent&key=API_KEY&contentType=json&iconSet=icons2

;-- Styling --;
FontFace=Share Tech Mono
FontColor=255,255,255,255
FontEffectColor=0,0,0,150
FontWidthMultiplyer=1.6
FontWidth=0.5

;-- Widget dimensions --;
GapSize=20

CurrentDayIconSize=100
CurrentDayFontSize=32

ForecastDateFontSize=14
ForecastIconSize=75

LargeIconSize=32
SmallIconSize=32

;-- Weather data variables --;
CurTemp=0
CurIcon="unknown"

D1MaxTemp=0
D1MinTemp=0
D1Icon="unknown"
D1DateString="Thu#CRLF#1 Jan"
D1Tooltip=None

D2MaxTemp=0
D2MinTemp=0
D2Icon="unknown"
D2DateString="Fri#CRLF#2 Jan"
D2Tooltip=None

D3MaxTemp=0
D3MinTemp=0
D3Icon="unknown"
D3DateString="Sat#CRLF#3 Jan"
D3Tooltip=None

D4MaxTemp=0
D4MinTemp=0
D4Icon="unknown"
D4DateString="Sun#CRLF#4 Jan"
D4Tooltip=None

