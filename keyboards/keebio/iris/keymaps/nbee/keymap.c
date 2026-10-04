// keymap.c
#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _LOWER, 
    _UPPER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_HOME,          KC_END,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, TL_LOWR, KC_SPC,                     KC_ENT,  TL_UPPR, KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_TRNS, KC_MS_U, KC_NO,   KC_GRV,  KC_MINS,                            KC_PLUS, KC_P9,   KC_UP,   KC_PGDN, KC_P7,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_DEL,  KC_MS_L, KC_MS_D, KC_MS_R, KC_NO,   KC_LBRC,                            KC_RBRC, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LCBR, KC_LPRN,          KC_RPRN, KC_RCBR, KC_BTN1, KC_BTN2, KC_BTN3, KC_NO,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_UPPER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_TOG, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              EE_CLR,  QK_RBT,  KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_MOD, KC_MPRV, KC_MNXT, KC_VOLU, KC_PGUP, KC_NO,                              QK_BOOT, DB_TOGG, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_MUTE, KC_MSTP, KC_MPLY, KC_VOLD, KC_PGDN, KC_NO,   KC_TRNS,          KC_TRNS, KC_NO,   KC_NO,   RGB_HUD, RGB_SAD, RGB_VAD, KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

// Layer state management for RGB
layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _BASE:
            // Layer 0: No backlighting
            rgb_matrix_disable();
            break;
            
        case _LOWER:
            // Layer 1: Enable RGB for individual key colors
            rgb_matrix_enable();
            rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR);
            break;
            
        case _UPPER:
            // Layer 2: Enable RGB for individual key colors
            rgb_matrix_enable();
            rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR);
            break;
    }
    return state;
}

// Individual key RGB control for layers
bool rgb_matrix_indicators_user(void) {
    if (get_highest_layer(layer_state) == _LOWER) {
        // Mouse keys - Red
        rgb_matrix_set_color(14, 255, 0, 0);   // KC_MS_U
        rgb_matrix_set_color(25, 255, 0, 0);   // KC_MS_L  
        rgb_matrix_set_color(26, 255, 0, 0);   // KC_MS_D
        rgb_matrix_set_color(27, 255, 0, 0);   // KC_MS_R
        rgb_matrix_set_color(45, 255, 0, 0);   // KC_BTN1
        rgb_matrix_set_color(46, 255, 0, 0);   // KC_BTN2
        rgb_matrix_set_color(47, 255, 0, 0);   // KC_BTN3
        
        // Arrow keys - Green
        rgb_matrix_set_color(20, 0, 255, 0);   // KC_UP
        rgb_matrix_set_color(31, 0, 255, 0);   // KC_LEFT
        rgb_matrix_set_color(32, 0, 255, 0);   // KC_DOWN
        rgb_matrix_set_color(33, 0, 255, 0);   // KC_RGHT
        
        // All other assigned keys - Blue
        rgb_matrix_set_color(0, 0, 0, 255);    // KC_TILD
        rgb_matrix_set_color(1, 0, 0, 255);    // KC_EXLM
        rgb_matrix_set_color(2, 0, 0, 255);    // KC_AT
        rgb_matrix_set_color(3, 0, 0, 255);    // KC_HASH
        rgb_matrix_set_color(4, 0, 0, 255);    // KC_DLR
        rgb_matrix_set_color(5, 0, 0, 255);    // KC_PERC
        rgb_matrix_set_color(6, 0, 0, 255);    // KC_CIRC
        rgb_matrix_set_color(7, 0, 0, 255);    // KC_AMPR
        rgb_matrix_set_color(8, 0, 0, 255);    // KC_ASTR
        rgb_matrix_set_color(9, 0, 0, 255);    // KC_LPRN
        rgb_matrix_set_color(10, 0, 0, 255);   // KC_RPRN
        rgb_matrix_set_color(16, 0, 0, 255);   // KC_GRV
        rgb_matrix_set_color(17, 0, 0, 255);   // KC_MINS
        rgb_matrix_set_color(18, 0, 0, 255);   // KC_PLUS
        rgb_matrix_set_color(19, 0, 0, 255);   // KC_P9
        rgb_matrix_set_color(21, 0, 0, 255);   // KC_PGDN
        rgb_matrix_set_color(22, 0, 0, 255);   // KC_P7
        rgb_matrix_set_color(24, 0, 0, 255);   // KC_DEL
        rgb_matrix_set_color(29, 0, 0, 255);   // KC_LBRC
        rgb_matrix_set_color(30, 0, 0, 255);   // KC_RBRC
        rgb_matrix_set_color(34, 0, 0, 255);   // KC_END
        rgb_matrix_set_color(41, 0, 0, 255);   // KC_LCBR
        rgb_matrix_set_color(42, 0, 0, 255);   // KC_LPRN
        rgb_matrix_set_color(43, 0, 0, 255);   // KC_RPRN
        rgb_matrix_set_color(44, 0, 0, 255);   // KC_RCBR
    }
    
    if (get_highest_layer(layer_state) == _UPPER) {
        // Purple backlight only on assigned keys
        // F-keys
        rgb_matrix_set_color(0, 128, 0, 128);  // KC_F12
        rgb_matrix_set_color(1, 128, 0, 128);  // KC_F1
        rgb_matrix_set_color(2, 128, 0, 128);  // KC_F2
        rgb_matrix_set_color(3, 128, 0, 128);  // KC_F3
        rgb_matrix_set_color(4, 128, 0, 128);  // KC_F4
        rgb_matrix_set_color(5, 128, 0, 128);  // KC_F5
        rgb_matrix_set_color(6, 128, 0, 128);  // KC_F6
        rgb_matrix_set_color(7, 128, 0, 128);  // KC_F7
        rgb_matrix_set_color(8, 128, 0, 128);  // KC_F8
        rgb_matrix_set_color(9, 128, 0, 128);  // KC_F9
        rgb_matrix_set_color(10, 128, 0, 128); // KC_F10
        rgb_matrix_set_color(11, 128, 0, 128); // KC_F11
        
        // Other assigned keys
        rgb_matrix_set_color(12, 128, 0, 128); // RGB_TOG
        rgb_matrix_set_color(18, 128, 0, 128); // EE_CLR
        rgb_matrix_set_color(19, 128, 0, 128); // QK_RBT
        rgb_matrix_set_color(24, 128, 0, 128); // RGB_MOD
        rgb_matrix_set_color(25, 128, 0, 128); // KC_MPRV
        rgb_matrix_set_color(26, 128, 0, 128); // KC_MNXT
        rgb_matrix_set_color(27, 128, 0, 128); // KC_VOLU
        rgb_matrix_set_color(28, 128, 0, 128); // KC_PGUP
        rgb_matrix_set_color(30, 128, 0, 128); // QK_BOOT
        rgb_matrix_set_color(31, 128, 0, 128); // DB_TOGG
        rgb_matrix_set_color(32, 128, 0, 128); // RGB_HUI
        rgb_matrix_set_color(33, 128, 0, 128); // RGB_SAI
        rgb_matrix_set_color(34, 128, 0, 128); // RGB_VAI
        rgb_matrix_set_color(36, 128, 0, 128); // KC_MUTE'
        rgb_matrix_set_color(37, 128, 0, 128); // KC_MSTP
        rgb_matrix_set_color(38, 128, 0, 128); // KC_MPLY
        rgb_matrix_set_color(39, 128, 0, 128); // KC_VOLD
        rgb_matrix_set_color(40, 128, 0, 128); // KC_PGDN
        rgb_matrix_set_color(46, 128, 0, 128); // RGB_HUD
        rgb_matrix_set_color(47, 128, 0, 128); // RGB_SAD
        rgb_matrix_set_color(48, 128, 0, 128); // RGB_VAD
    }
    
    return false;
}