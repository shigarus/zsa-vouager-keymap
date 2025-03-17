#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,        
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_RBRC,        KC_BSLS,        
    TOGGLE_LAYER_COLOR,KC_TRANSPARENT, KC_TRANSPARENT, OSL(3),         KC_ENTER,       KC_TAB,                                         TO(2),          KC_ESCAPE,      TO(3),          KC_TRANSPARENT, KC_TRANSPARENT, TO(5),          
                                                    MT(MOD_LSFT, KC_BSPC),OSL(1),                                         OSL(4),         KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, OSM(MOD_MEH),   OSM(MOD_LALT),  OSM(MOD_LGUI),  OSM(MOD_LCTL),  ST_MACRO_2,                                     KC_TRANSPARENT, OSM(MOD_RCTL),  OSM(MOD_RGUI),  OSM(MOD_RALT),  OSM(MOD_MEH),   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_3,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    OSM(MOD_LSFT),  TO(0),                                          TO(2),          KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT,                                 KC_MS_WH_UP,    KC_PAGE_UP,     KC_HOME,        KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MEH,         KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_CTRL,   KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_WH_DOWN,  KC_PGDN,        KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    RGB_TOG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, TO(0),                                          OSL(4),         KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_0,           KC_4,           KC_5,           KC_6,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, TO(0),                                          OSL(4),         KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_GRAVE,       KC_TILD,        KC_0,                                           KC_1,           KC_ASTR,        KC_AMPR,        KC_PERC,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_BSLS,        KC_SLASH,       KC_LBRC,        KC_UNDS,        KC_EQUAL,                                       KC_LCBR,        KC_LPRN,        KC_CIRC,        KC_DLR,         KC_HASH,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PIPE,        KC_QUES,        KC_RBRC,        KC_MINUS,       KC_PLUS,                                        KC_RCBR,        KC_RPRN,        KC_EXLM,        KC_AT,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         
                                                    KC_TRANSPARENT, TO(0),                                          TO(0),          KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
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

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {246,232,114}, {246,232,114}, {0,0,0}, {0,0,0}, {246,232,114}, {246,232,114}, {246,232,114}, {246,232,114}, {246,232,114}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {246,232,114}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {246,232,114}, {246,232,114}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {246,232,114}, {246,232,114}, {246,232,114}, {246,232,114}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {246,232,114}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {170,218,204}, {170,218,204}, {170,218,204}, {0,0,0}, {0,0,0}, {170,218,204}, {170,218,204}, {170,218,204}, {170,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {170,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {170,218,204}, {170,218,204}, {170,218,204}, {170,218,204}, {170,218,204}, {170,218,204}, {0,0,0}, {0,0,0}, {170,218,204}, {170,218,204}, {170,218,204}, {170,218,204}, {0,0,0}, {0,0,0}, {170,218,204}, {170,218,204}, {170,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {170,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {170,218,204}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,216,206}, {0,0,0}, {139,216,206}, {139,216,206}, {139,216,206}, {0,0,0}, {0,0,0}, {139,216,206}, {139,216,206}, {139,216,206}, {139,216,206}, {0,0,0}, {0,0,0}, {0,0,0}, {139,216,206}, {139,216,206}, {139,216,206}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,216,206}, {0,0,0}, {0,0,0}, {0,0,0}, {139,216,206}, {0,0,0} },

    [4] = { {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138}, {43,240,138} },

    [5] = { {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101}, {21,237,101} },

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
    case 5:
      set_layer_color(5);
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
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_SPACE)) SS_DELAY(100) SS_TAP(X_LBRC) SS_DELAY(100) SS_LSFT(SS_TAP(X_SLASH)));
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
        switch (keycode) {
          case OSM(MOD_LSFT):
            break;
          default:
            clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
        }
    }
    return;
}
