;-- Includes for main skin --;
[Rainmeter]
OnRefreshAction         = [!ActivateConfig "oled-desktop\Utilities\Controls" "Controls.ini"][!ActivateConfig "oled-desktop\Utilities\TaskbarHider" "TaskbarHider.ini"]
OnCloseAction           = [!DeactivateConfigGroup "CloseSkin"]

[Variables]
HoverBackground         = 0
HoverClock              = 0
HoverControls           = 0
HoverWeather            = 0

LastHoverTime           = 0