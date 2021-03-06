#include "maartenwut.h"

#define _MA 0
#define _NU 1
#define _FL 2
#define _GA 3
#define _AR 4

#define LSHIFT OSM(MOD_LSFT)
#define SPACE LT(_AR, KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_MA] = LAYOUT(
    KC_GRV,		KC_1,		KC_2,		KC_3,		KC_4,		KC_5,		KC_6,		KC_7,		KC_8,		KC_9,		KC_0,		KC_MINS,	KC_EQL,		KC_BSPC,
    KC_ESC,		KC_Q,		KC_W,		KC_E,		KC_R,		KC_T,		KC_Y,		KC_U,		KC_I,		KC_O,		KC_P,		KC_LBRC,	KC_RBRC,	KC_BSLS,
    KC_TAB,		KC_A,		KC_S,		KC_D,		KC_F,		KC_G,		KC_H,		KC_J,		KC_K,		KC_L,		KC_SCLN,	KC_QUOT,	KC_DEL,		KC_ENT,
    LSHIFT,		KC_Z,		KC_X,		KC_C,		KC_V,		KC_B,		KC_N,		KC_M,		KC_COMM,	KC_DOT,		KC_SLSH,	KC_RSFT,	KC_UP,		KC_PSCR,
    KC_LCTL,	KC_LGUI,	KC_LALT,	MO(_NU),				SPACE,					KC_SPC,					MO(_FL),	KC_RALT,	KC_LEFT,	KC_DOWN,	KC_RGHT),
[_NU] = LAYOUT(
    _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
    _______,	KC_7,		KC_8,		KC_9,		_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
    KC_CAPS,	KC_4,		KC_5,		KC_6,		_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
    _______,	KC_1,		KC_2,		KC_3,		_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
    _______,	KC_0,		_______,	_______,				_______,				_______,				_______,	_______,	_______,	_______,	_______),
[_FL] = LAYOUT(
    _______,	KC_F1,		KC_F2,		KC_F3,		KC_F4,		KC_F5,		KC_F6,		KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_F11,		KC_F12,		KC_MPLY,
    RESET,		_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
    _______,	_______,	_______,	_______,	_______,	TG(_GA),	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
    _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
    _______,	_______,	_______,	_______,				_______,				_______,				_______,	_______,	_______,	_______,	_______),
[_GA] = LAYOUT(
    _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
    _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
    _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
    KC_LSFT,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
    _______,	_______,	_______,	_______,				KC_SPC,					_______,				_______,	_______,	_______,	_______,	_______),
[_AR] = LAYOUT(
    _______,	KC_F1,		KC_F2,		KC_F3,		KC_F4,		KC_F5,		KC_F6,		KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_F11,		KC_F12,		_______,
    _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
    _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
    _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
    _______,	_______,	_______,	_______,				_______,				_______,				_______,	_______,	_______,	_______,	_______)
};
