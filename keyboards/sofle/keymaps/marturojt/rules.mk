MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
RGBLIGHT_ENABLE = yes       # Enable WS2812 RGB underlight.
ENCODER_ENABLE = yes
LTO_ENABLE = yes
OLED_ENABLE = yes
OLED_DRIVER = SSD1306


BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output
SWAP_HANDS_ENABLE = no      # Enable one-hand typing
WPM_ENABLE = yes

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no    # Breathing sleep LED during USB suspend

 # If you want to change the display of OLED, you need to change here
 # SRC +=  ./lib/rgb_state_reader.c \
         # ./lib/layer_state_reader.c \
         # ./lib/logo_reader.c \
         # ./lib/keylogger.c \
         # ./lib/mode_icon_reader.c \
         # ./lib/host_led_state_reader.c \
         # ./lib/timelogger.c \