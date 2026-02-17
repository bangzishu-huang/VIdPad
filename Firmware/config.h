#define ENCODER_A_PINS {GP2}
#define ENCODER_B_PINS {GP1}

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
#    define RGBLIGHT_DEFAULT_HUE 200    // Purple Hue
#    define RGBLIGHT_DEFAULT_SAT 255    // Full Saturation
#    define RGBLIGHT_DEFAULT_VAL 255    // Full Brightness

#endif


#define WS2812_DI_PIN GP3
#define RGBLIGHT_LED_COUNT 6 

#ifdef OLED_ENABLE
#    define I2C1_SDA_PIN GP6
#    define I2C1_SCL_PIN GP7
#    define OLED_DISPLAY_128X32
#    define OLED_BRIGHTNESS 255 // Max brightness (0-255)
#    define OLED_UPDATE_INTERVAL 100

#endif