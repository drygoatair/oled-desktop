[Variables]
;-- Sizing --;
SizeMultiplyer          = 1
Gap                     = 5
Margin                  = 32
ScrW                    = #SCREENAREAWIDTH#
ScrH                    = #SCREENAREAHEIGHT#
TaskbarHigh             = 40
TaskbarLow              = 2

;-- Path Shortcuts --;
Btns                    = #@#img\buttons
Wthr                    = #@#img\weather
WthrVars                = #@#inc\weatherVars.inc
WthrCnfg                = #ROOTCONFIG#\Widgets\Weather

;-- Hide/Show control variables--;
WidgetsHidden           = 1
TotalFlashTime          = 4
Flash                   = Ceil(#TotalFlashTime# / 2)