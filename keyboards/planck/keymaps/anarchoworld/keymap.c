#include QMK_KEYBOARD_H

#define BASE    0
#define MOU     1
#define NUM     2
#define NAV     3
#define FUN     4
#define SYM     5
#define MED     6
#define _       KC_NO
#define ALT(x)  LALT_T((x))
#define CTL(x)  LCTL_T((x))
#define SFT(x)  LSFT_T((x))
#define GUI(x)  LGUI_T((x))
#define COMM    KC_COMM
#define DOT     KC_DOT
#define SLSH    KC_SLSH
#define ESC     KC_ESC
#define TAB     KC_TAB
#define ENT     KC_ENT
#define SPC     KC_SPC
#define BSPC    KC_BSPC
#define DEL     KC_DEL
#define QUOT    KC_QUOT

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE]=LAYOUT_planck_mit(
            KC_Q,         KC_W,         KC_F,         KC_P,         KC_B,         _,             _,             KC_J,         KC_L,         KC_U,         KC_Y,         QUOT,
            GUI(KC_A),    ALT(KC_R),    CTL(KC_S),    SFT(KC_T),    KC_G,         _,             _,             KC_M,         SFT(KC_N),    CTL(KC_E),    ALT(KC_I),    GUI(KC_O),
            KC_Z,         KC_X,         KC_C,         KC_D,         KC_V,         _,             _,             KC_K,         KC_H,         COMM,         DOT,          SLSH,
            _,            _,            LT(MOU, ESC), LT(NUM, SPC), LT(NAV, TAB),                _,             LT(FUN, ENT), LT(SYM, BSPC),LT(MED, DEL), _,             _),

    [MOU]=LAYOUT_planck_mit(
            _,            _,            _,            _,            _,            _,             _,             KC_AGIN,      KC_PSTE,      KC_COPY,      KC_CUT,       KC_UNDO,
            KC_LGUI,      KC_LALT,      KC_LCTL,      KC_LSFT,      _,            _,             _,             _,            KC_MS_L,      KC_MS_D,      KC_MS_U,      KC_MS_R,
            _,            _,            _,            _,            _,            _,             _,             _,            KC_WH_L,      KC_WH_D,      KC_WH_U,      KC_WH_R,
            QK_BOOT,      _,            _,            _,            _,                           _,             KC_BTN2,      KC_BTN1,      KC_BTN3,      _,            _),


    [NUM]=LAYOUT_planck_mit(
            _,            _,            _,            _,            _,            _,             _,             KC_PSLS,      KC_7,         KC_8,         KC_9,         KC_E,
            KC_LGUI,      KC_LALT,      KC_LCTL,      KC_LSFT,      _,            _,             _,             KC_PPLS,      KC_4,         KC_5,         KC_6,         KC_EQL,
            _,            _,            _,            _,            _,            _,             _,             KC_PMNS,      KC_1,         KC_2,         KC_3,         KC_PERC,
            QK_BOOT,      _,            _,            _,            _,                           _,             KC_ASTR,      KC_0,         DOT,          _,            _),

    [NAV]=LAYOUT_planck_mit(
            _,            _,            _,            _,            _,            _,             _,             KC_AGIN,      KC_PSTE,      KC_COPY,      KC_CUT,       KC_UNDO,
            KC_LGUI,      KC_LALT,      KC_LCTL,      KC_LSFT,      _,            _,             _,             KC_CAPS,      KC_LEFT,      KC_DOWN,      KC_UP,        KC_RGHT,
            _,            _,            _,            _,            _,            _,             _,             KC_INS,       KC_HOME,      KC_PGDN,      KC_PGUP,      KC_END,
            QK_BOOT,      _,            _,            _,            _,                           _,             ENT,          BSPC,         DEL,          _,            _),

    [FUN]=LAYOUT_planck_mit(
            KC_F12,       KC_F7,        KC_F8,        KC_F9,        KC_PSCR,      _,             _,             _,            _,            _,            _,            _,
            KC_F11,       KC_F4,        KC_F5,        KC_F6,        KC_SCRL,      _,             _,             _,            KC_LSFT,      KC_LCTL,      KC_LALT,      KC_LGUI,
            KC_F10,       KC_F1,        KC_F2,        KC_F3,        KC_PAUS,      _,             _,             _,            _,            _,            _,            _,
            _,            _,            KC_APP,       SPC,          TAB,                         _,             _,            _,            _,            _,            QK_BOOT),

    [SYM]=LAYOUT_planck_mit(
            KC_TILD,      KC_PERC,      KC_AMPR,      KC_PIPE,      KC_AT,        _,             _,             _,            _,            KC_PAST,      _,            _,
            KC_UNDS,      KC_LCBR,      KC_LBRC,      KC_LPRN,      KC_CIRC,      _,             _,             _,            KC_PMNS,      KC_PPLS,      KC_EQL,       KC_COLN,
            KC_BSLS,      KC_RCBR,      KC_RBRC,      KC_RPRN,      KC_EXLM,      _,             _,             _,            KC_HASH,      _,            _,            _,
            _,            _,            _,            KC_SCLN,      KC_DLR,                      _,             _,            _,            _,            _,            QK_BOOT),

    [MED]=LAYOUT_planck_mit(
            _,            _,            _,            _,            _,            _,             _,             _,            _,            _,            _,            _,
            KC_MPRV,      KC_VOLD,      KC_VOLU,      KC_MNXT,      _,            _,             _,             _,            KC_LSFT,      KC_LCTL,      KC_LALT,      KC_LGUI,
            _,            _,            RGB_VAD,      RGB_TOG,      _,            _,             _,             _,            _,            _,            _,            _,
            _,            _,            KC_MSTP,      KC_MPLY,      KC_MUTE,                     _,             _,            _,            _,            _,            QK_BOOT),

};
