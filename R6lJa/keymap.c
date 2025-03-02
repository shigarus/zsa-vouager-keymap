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
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,        
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_RBRC,        KC_BSLS,        
    TOGGLE_LAYER_COLOR,KC_TRANSPARENT, KC_TRANSPARENT, OSL(1),         KC_TAB,         KC_ENTER,                                       KC_ESCAPE,      TO(2),          OSL(3),         KC_TRANSPARENT, KC_TRANSPARENT, TO(4),          
                                                    KC_SPACE,       OSL(3),                                         OSL(1),         MT(MOD_LSFT, KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, OSM(MOD_LALT),  OSM(MOD_LGUI),  OSM(MOD_LCTL),  KC_TRANSPARENT,                                 KC_TRANSPARENT, OSM(MOD_RCTL),  OSM(MOD_RGUI),  OSM(MOD_RALT),  KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_LEFT_SHIFT),LCTL(KC_LEFT_SHIFT),KC_TRANSPARENT,                                 KC_TRANSPARENT, RCTL(KC_RIGHT_SHIFT),RGUI(KC_RIGHT_SHIFT),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, OSL(3),                                         TO(0),          KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_AUDIO_VOL_UP,KC_TRANSPARENT,                                 KC_MS_WH_UP,    KC_PGDN,        KC_PAGE_UP,     KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_CTRL,   KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_LEFT_SHIFT),LCTL(KC_LEFT_SHIFT),KC_TRANSPARENT,                                 KC_MS_WH_DOWN,  KC_END,         KC_HOME,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    RGB_TOG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, OSL(3),                                         TO(0),          KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_GRAVE,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_BSLS,        KC_SLASH,       KC_EQUAL,       KC_MINUS,       KC_LBRC,                                        KC_0,           KC_4,           KC_5,           KC_6,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PLUS,        KC_UNDS,        KC_RBRC,                                        KC_MINUS,       KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         
                                                    KC_TRANSPARENT, TO(0),                                          TO(0),          OSM(MOD_LSFT)
  ),
  [4] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_7,           KC_8,           KC_9,           KC_0,           
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,        
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_ALT,    KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_RBRC,        KC_ENTER,       
                                                    KC_SPACE,       KC_LEFT_CTRL,                                   TO(0),          KC_TRANSPARENT
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101}, {92,227,101} },

    [1] = { {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133}, {241,226,133} },

    [2] = { {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167}, {139,187,167} },

    [3] = { {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138} },

    [4] = { {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101} },

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
    case 4:
      set_layer_color(4);
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



