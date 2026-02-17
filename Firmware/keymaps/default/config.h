#define ENCODER_A_PINS {D8}
#define ENCODER_B_PINS {D7}

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
#    define RGBLIGHT_DEFAULT_HUE 280    // Purple Hue
#    define RGBLIGHT_DEFAULT_SAT 255    // Full Saturation
#    define RGBLIGHT_DEFAULT_VAL 255    // Full Brightness

#endif


#define WS2812_DI_PIN D10
#define RGBLIGHT_LED_COUNT 6 

#ifdef OLED_ENABLE
#    define I2C1_SDA_PIN D4
#    define I2C1_SCL_PIN D5
#    define OLED_DISPLAY_128X32
#    define OLED_BRIGHTNESS 255 // Max brightness (0-255)
#    define OLED_UPDATE_INTERVAL 100

#endif