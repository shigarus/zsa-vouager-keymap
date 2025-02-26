#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,        
    KC_ESCAPE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_RIGHT_SHIFT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_RBRC,        KC_ENTER,       
    KC_5,           KC_4,           KC_3,           KC_2,           KC_1,           KC_MINUS,                                       KC_EQUAL,       KC_0,           KC_9,           KC_8,           KC_7,           KC_6,           
                                                    KC_SPACE,       OSL(1),                                         TO(2),          MT(MOD_LSFT, KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, OSM(MOD_LALT),  OSM(MOD_LGUI),  OSM(MOD_LCTL),  KC_TRANSPARENT,                                 KC_TRANSPARENT, OSM(MOD_RCTL),  OSM(MOD_RGUI),  OSM(MOD_RALT),  KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, TO(0),                                          TO(3),          KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_GRAVE,       KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_RABK,        KC_8,           KC_9,           KC_MINUS,       KC_SLASH,       KC_F12,         
    KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,                                        KC_4,           KC_LEFT_CTRL,   KC_6,           KC_PLUS,        KC_ASTR,        KC_BSPC,        
    KC_TRANSPARENT, KC_ASTR,        KC_LBRC,        KC_RBRC,        KC_LCBR,        KC_RCBR,                                        KC_1,           KC_2,           KC_3,           KC_DOT,         KC_EQUAL,       KC_ENTER,       
                                                    KC_TRANSPARENT, TO(0),                                          TO(0),          KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_CTRL,   KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, TO(0),                                          TO(2),          KC_TRANSPARENT
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134}, {92,205,134} },

    [1] = { {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133} },

    [2] = { {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138} },

    [3] = { {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LGUI(SS_LSFT(SS_TAP(X_E)))));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LGUI(SS_LSFT(SS_TAP(X_R)))));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (IS_QK_ONE_SHOT_MOD(keycode) && is_oneshot_layer_active() && record->event.pressed) {
        clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
    }
    return;
}
