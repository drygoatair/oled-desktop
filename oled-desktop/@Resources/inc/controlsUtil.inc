[Variables]
;-- Button Panel --;
NoOfButtons             = 2

;-- Sizing --;
BtnSize                 = 64
ButtonPanelWidth        = ([#BtnSize] * [#NoOfButtons]) + (2 * [#Margin])
ButtonPanelHeight       = ([#BtnSize] + (2 * [#Margin]))
ButtonPanelX            = ([#ScrW] - [#ButtonPanelWidth]) / 2