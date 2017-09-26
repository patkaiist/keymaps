#include "planck.h"
#include "action_layer.h"

extern keymap_config_t keymap_config;

enum planck_layers {
  _QWERTY,
  _RAISE
};

enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  RAISE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_QWERTY] = {
	  {KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,       KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC},
	  {KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,       KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT},
	  {KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,       KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_GRV },
	  {KC_LCTL, KC_BSLS, KC_LALT, KC_LGUI, MO(_RAISE), KC_SPC,  KC_SPC,  KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_ENT}
	},
	[_RAISE] = {
	  {_______, KC_1,    KC_2,    KC_3,    KC_4,       KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC},
	  {KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______,    _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______},
	  {KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______,    _______, _______, _______, _______, _______, _______, _______},
	  {KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,    _______, _______, KC_VOLD, KC_VOLU, _______, _______, _______}
	}
};

#ifdef AUDIO_ENABLE
  float plover_song[][2]     = SONG(PLOVER_SOUND);
  float plover_gb_song[][2]  = SONG(PLOVER_GOODBYE_SOUND);
#endif
