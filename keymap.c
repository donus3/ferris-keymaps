#include QMK_KEYBOARD_H

const uint16_t PROGMEM esc_combo[] = {LGUI_T(KC_J), LALT_T(KC_K), COMBO_END};
combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
   LSFT_T(KC_A),LCTL_T(KC_S),LALT_T(KC_D),LGUI_T(KC_F),KC_G,          KC_H,LGUI_T(KC_J),LALT_T(KC_K),LCTL_T(KC_L),LSFT_T(KC_SCLN),
   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                          KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                              MO(1),   LT(3,KC_SPC),                  LT(4,KC_ENT),     LT(2,KC_BSPC)),
  [1] = LAYOUT( // numbers and symbols
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_QUOT,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_CAPS,                      KC_TRNS, KC_GRV,  KC_BSLS, KC_TRNS, KC_TRNS,
                               KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS),
  [2] = LAYOUT( // functions
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
    KC_TAB,  KC_TRNS, KC_VOLD, KC_VOLU, KC_TRNS,                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F11,
    KC_MUTE, KC_MPLY, KC_MPRV, KC_MNXT, KC_DEL,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F12,
                               KC_TAB,  KC_ESC,                       KC_TRNS, KC_TRNS),
  [3] = LAYOUT( // navigation
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_TRNS, KC_HOME, KC_END,  KC_PGUP, KC_PGDN,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS,
    QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                               KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS),
  [4] = LAYOUT( // mouse
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_TRNS,
    QK_LLCK, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN3,                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,
                               KC_BTN1, KC_BTN2,                      KC_TRNS, KC_TRNS)
};
