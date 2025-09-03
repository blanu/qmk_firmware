/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#include "quantum.h"

enum combos
{
  // Numbers
  ON_ONE,
  TW_TWO,
  TH_THREE,
  FO_FOUR,
  FI_FIVE,
  SI_SIX,
  SE_SEVEN,
  EI_EIGHT,
  NI_NINE,
  ZE_ZERO,

  // Arithmetic
  AD_ADD,
  SU_SUBTRACT,
  MU_MULTIPLY,
  DI_DIVIDE,

  // Comparisons
  EQ_EQUAL,
  LE_LESS,
  GR_GREATER,

  // Logic
  BA_BANG,
  AN_AND,
  OR_OR,

  // Grouping
  LP_OPEN,
  RP_CLOSE,
  LS_LEFTSQUARE,
  RS_RIGHTSQUARE,
  LC_LEFTCURLY,
  RC_RIGHTCURLY,

  // Navigation
  PU_PAGEUP,
  PD_PAGEDOWN,
  HO_HOME,
  EN_END,

  // Function
  FON_F1,
  FTW_F2,
  FTH_F3,
  FOU_F4,
  FIV_F5,
  FSI_F6,
  FSE_F7,
  FEI_F8,
  FNI_F9,
  FTE_F10,
  FEL_F11,
  FTWE_F12,

  // Misc
  AT_AT,
  HA_HASH,
  DO_DOLLAR,
  MO_MOD,
  EX_EXPONENT,
  UN_UNDERSCORE,
  TI_TILDE,
  BT_BACKTICK,

  // Redundant
  CO_COMMA,
  PE_PERIOD,
  QU_QUESTIONMARK,
  SL_SLASH,
  BS_BACKSLASH,
  SC_SEMICOLON,
  QT_QUOTE,
  DQ_DOUBLEQUOTE,
};

// Numbers
const uint16_t PROGMEM on_combo[] = {KC_O, KC_N, COMBO_END};
const uint16_t PROGMEM tw_combo[] = {KC_T, KC_W, COMBO_END};
const uint16_t PROGMEM th_combo[] = {KC_T, KC_H, COMBO_END};
const uint16_t PROGMEM fo_combo[] = {KC_F, KC_O, COMBO_END};
const uint16_t PROGMEM fi_combo[] = {KC_F, KC_I, COMBO_END};
const uint16_t PROGMEM si_combo[] = {KC_S, KC_I, COMBO_END};
const uint16_t PROGMEM se_combo[] = {KC_S, KC_E, COMBO_END};
const uint16_t PROGMEM ei_combo[] = {KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM ni_combo[] = {KC_N, KC_I, COMBO_END};
const uint16_t PROGMEM ze_combo[] = {KC_Z, KC_E, COMBO_END};

// Arithmetic
const uint16_t PROGMEM ad_combo[] = {KC_A, KC_D, COMBO_END};
const uint16_t PROGMEM su_combo[] = {KC_S, KC_U, COMBO_END};
const uint16_t PROGMEM mu_combo[] = {KC_M, KC_U, COMBO_END};
const uint16_t PROGMEM di_combo[] = {KC_D, KC_I, COMBO_END};

// Comparisons
const uint16_t PROGMEM eq_combo[] = {KC_E, KC_Q, COMBO_END};
const uint16_t PROGMEM le_combo[] = {KC_L, KC_E, COMBO_END};
const uint16_t PROGMEM gr_combo[] = {KC_G, KC_R, COMBO_END};

// Logic
const uint16_t PROGMEM ba_combo[] = {KC_B, KC_A, COMBO_END};
const uint16_t PROGMEM an_combo[] = {KC_A, KC_N, COMBO_END};
const uint16_t PROGMEM or_combo[] = {KC_O, KC_R, COMBO_END};

// Grouping
const uint16_t PROGMEM lp_combo[] = {KC_L, KC_P, COMBO_END};
const uint16_t PROGMEM rp_combo[] = {KC_R, KC_P, COMBO_END};
const uint16_t PROGMEM ls_combo[] = {KC_L, KC_S, COMBO_END};
const uint16_t PROGMEM rs_combo[] = {KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM lc_combo[] = {KC_L, KC_C, COMBO_END};
const uint16_t PROGMEM rc_combo[] = {KC_R, KC_C, COMBO_END};

// Navigation
const uint16_t PROGMEM pu_combo[] = {KC_P, KC_U, COMBO_END};
const uint16_t PROGMEM pd_combo[] = {KC_P, KC_D, COMBO_END};
const uint16_t PROGMEM ho_combo[] = {KC_H, KC_O, COMBO_END};
const uint16_t PROGMEM en_combo[] = {KC_E, KC_N, COMBO_END};

// Functions
const uint16_t PROGMEM fon_combo[] = {KC_F, KC_O, KC_N, COMBO_END};
const uint16_t PROGMEM ftw_combo[] = {KC_F, KC_T, KC_W, COMBO_END};
const uint16_t PROGMEM fth_combo[] = {KC_F, KC_T, KC_H, COMBO_END};
const uint16_t PROGMEM fou_combo[] = {KC_F, KC_O, KC_U, COMBO_END};
const uint16_t PROGMEM fiv_combo[] = {KC_F, KC_I, KC_V, COMBO_END};
const uint16_t PROGMEM fsi_combo[] = {KC_F, KC_S, KC_I, COMBO_END};
const uint16_t PROGMEM fse_combo[] = {KC_F, KC_S, KC_E, COMBO_END};
const uint16_t PROGMEM fei_combo[] = {KC_F, KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM fni_combo[] = {KC_F, KC_N, KC_I, COMBO_END};
const uint16_t PROGMEM fte_combo[] = {KC_F, KC_T, KC_E, COMBO_END};
const uint16_t PROGMEM fel_combo[] = {KC_F, KC_E, KC_L, COMBO_END};
const uint16_t PROGMEM ftwe_combo[] = {KC_F, KC_T, KC_W, KC_E, COMBO_END};

// Misc
const uint16_t PROGMEM at_combo[] = {KC_A, KC_T, COMBO_END};
const uint16_t PROGMEM ha_combo[] = {KC_H, KC_A, COMBO_END};
const uint16_t PROGMEM do_combo[] = {KC_D, KC_O, COMBO_END};
const uint16_t PROGMEM mo_combo[] = {KC_M, KC_O, COMBO_END};
const uint16_t PROGMEM ex_combo[] = {KC_E, KC_X, COMBO_END};
const uint16_t PROGMEM un_combo[] = {KC_U, KC_N, COMBO_END};
const uint16_t PROGMEM ti_combo[] = {KC_T, KC_I, COMBO_END};
const uint16_t PROGMEM bt_combo[] = {KC_B, KC_T, COMBO_END};

// Redundant
const uint16_t PROGMEM co_combo[] = {KC_C, KC_O, COMBO_END};
const uint16_t PROGMEM pe_combo[] = {KC_P, KC_E, COMBO_END};
const uint16_t PROGMEM qu_combo[] = {KC_Q, KC_U, COMBO_END};
const uint16_t PROGMEM sl_combo[] = {KC_S, KC_L, COMBO_END};
const uint16_t PROGMEM bs_combo[] = {KC_B, KC_S, COMBO_END};
const uint16_t PROGMEM sc_combo[] = {KC_S, KC_C, COMBO_END};
const uint16_t PROGMEM qt_combo[] = {KC_Q, KC_T, COMBO_END};
const uint16_t PROGMEM dq_combo[] = {KC_D, KC_Q, COMBO_END};

combo_t key_combos[COMBO_COUNT] =
{
  // Numbers
  [ON_ONE]   = COMBO(on_combo, KC_1), // 1
  [TW_TWO]   = COMBO(tw_combo, KC_2), // 2
  [TH_THREE] = COMBO(th_combo, KC_3), // 3
  [FO_FOUR]  = COMBO(fo_combo, KC_4), // 4
  [FI_FIVE]  = COMBO(fi_combo, KC_5), // 5
  [SI_SIX]   = COMBO(si_combo, KC_6), // 6
  [SE_SEVEN] = COMBO(se_combo, KC_7), // 7
  [EI_EIGHT] = COMBO(ei_combo, KC_8), // 8
  [NI_NINE]  = COMBO(ni_combo, KC_9), // 9
  [ZE_ZERO]  = COMBO(ze_combo, KC_0), // 0

  // Arithmetic
  [AD_ADD] = COMBO(ad_combo, S(KC_EQL)),     // Shift + = -> +
  [SU_SUBTRACT] = COMBO(su_combo, KC_MINUS), // -
  [MU_MULTIPLY] = COMBO(mu_combo, S(KC_8)),  // Shift + 8 -> *
  [DI_DIVIDE] = COMBO(di_combo, KC_SLSH),    // /

  // Comparisons
  [EQ_EQUAL] = COMBO(eq_combo, KC_EQUAL),    // =
  [LE_LESS] = COMBO(le_combo, S(KC_COMMA)),  // Shift + , -> <
  [GR_GREATER] = COMBO(gr_combo, S(KC_DOT)), // Shift + . = >

  // Logic
  [BA_BANG] = COMBO(ba_combo, S(KC_1)),  // Shift + 1 -> !
  [AN_AND] = COMBO(an_combo, S(KC_7)),   // Shift + 7 -> &
  [OR_OR] = COMBO(or_combo, S(KC_BSLS)), // Shift + \ = |

  // Grouping
  [LP_OPEN] = COMBO(lp_combo, S(KC_9)),          // Shift + 9 -> (
  [RP_CLOSE] = COMBO(rp_combo, S(KC_0)),         // Shift + 0 -> )
  [LS_LEFTSQUARE] = COMBO(ls_combo, KC_LBRC),    // [
  [RS_RIGHTSQUARE] = COMBO(rs_combo, KC_RBRC),   // ]
  [LC_LEFTCURLY] = COMBO(lc_combo, S(KC_LBRC)),  // Shift + [ = {
  [RC_RIGHTCURLY] = COMBO(rc_combo, S(KC_RBRC)), // Shift + ] = }

  // Navigation
  [PU_PAGEUP] = COMBO(pu_combo, KC_PAGE_UP), // Page Up
  [PD_PAGEDOWN] = COMBO(pd_combo, KC_PGDN),  // Page Down
  [HO_HOME] = COMBO(ho_combo, KC_HOME),      // Home
  [EN_END] = COMBO(en_combo, KC_END),        // End

  // Functions
  [FON_F1] = COMBO(fon_combo, KC_F1),     // F1
  [FTW_F2] = COMBO(ftw_combo, KC_F2),     // F2
  [FTH_F3] = COMBO(fth_combo, KC_F3),     // F3
  [FOU_F4] = COMBO(fou_combo, KC_F4),     // F4
  [FIV_F5] = COMBO(fiv_combo, KC_F5),     // F5
  [FSI_F6] = COMBO(fsi_combo, KC_F6),     // F6
  [FSE_F7] = COMBO(fse_combo, KC_F7),     // F7
  [FEI_F8] = COMBO(fei_combo, KC_F8),     // F8
  [FNI_F9] = COMBO(fni_combo, KC_F9),     // F9
  [FTE_F10] = COMBO(fte_combo, KC_F10),   // F10
  [FEL_F11] = COMBO(fel_combo, KC_F11),   // F11
  [FTWE_F12] = COMBO(ftwe_combo, KC_F12), // F12

  // Misc
  [AT_AT] = COMBO(at_combo, S(KC_2)),             // Shift + 2 -> @
  [HA_HASH] = COMBO(ha_combo, S(KC_3)),           // Shift + 3 -> #
  [DO_DOLLAR] = COMBO(do_combo, S(KC_4)),         // Shift + 4 -> $
  [MO_MOD] = COMBO(mo_combo, S(KC_5)),            // Shift + 5 -> %
  [EX_EXPONENT] = COMBO(ex_combo, S(KC_6)),       // Shift + 6 -> ^
  [UN_UNDERSCORE] = COMBO(un_combo, S(KC_MINUS)), // Shift + - -> _
  [TI_TILDE] = COMBO(ti_combo, S(KC_GRV)),        // Shift + ` -> ~
  [BT_BACKTICK] = COMBO(bt_combo, KC_GRV),        // `

  // Redundant
  [CO_COMMA] = COMBO(co_combo, KC_COMMA),          // ,
  [PE_PERIOD] = COMBO(pe_combo, KC_DOT),           // .
  [QU_QUESTIONMARK] = COMBO(qu_combo, S(KC_SLSH)), // Shift + / -> ?
  [SL_SLASH] = COMBO(sl_combo, KC_SLSH),           // /
  [BS_BACKSLASH] = COMBO(bs_combo, KC_BSLS),       // "\" - lack of quotes here confuses the CLion syntax highlighter
  [SC_SEMICOLON] = COMBO(sc_combo, KC_SEMICOLON),  // ;
  [QT_QUOTE] = COMBO(qt_combo, KC_QUOTE),          // '
  [DQ_DOUBLEQUOTE] = COMBO(dq_combo, S(KC_QUOTE)), // Shift + ' -> "
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] =
{
  // keymap for default
  [0] = LAYOUT_universal(
    KC_TAB    , KC_Q   , KC_W   , KC_E      , KC_R         , KC_T  ,                                        KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , S(KC_TAB),
    S(KC_QUOT), KC_A   , KC_S   , KC_D      , KC_F         , KC_G  ,                                        KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  , KC_QUOT  ,
    KC_LSFT   , KC_Z   , KC_X   , KC_C      , KC_V         , KC_B  ,                                        KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_RSFT  ,
                KC_LALT, KC_LCTL, S(KC_COLN), LT(1,KC_BSPC), KC_ESC,                                        KC_ENT   , KC_SPC   , _______  , _______  , KC_BSLS
  ),

  [1] = LAYOUT_universal(
    SSNP_FRE ,  KC_1    , KC_2     , KC_3    , KC_4     , KC_5     ,                                         KC_6     , KC_7     , KC_8     , KC_9     , KC_0     , S(KC_LBRC),
    SSNP_VRT ,  KC_BTN3 , KC_BTN2  , KC_BTN1 , KC_ENT   , KC_DEL   ,                                         KC_LEFT  , KC_DOWN  , KC_UP    , KC_RGHT  , KC_BTN3  , S(KC_RBRC),
    SSNP_HOR ,  _______ , KC_LEFT  , KC_DOWN , KC_RGHT  , KC_BSPC  ,                                         KC_PGDN  , KC_LEFT  , KC_DOWN  , KC_RGHT  , _______  , _______   ,
                _______ , _______  , _______ , _______  , _______  ,                                         _______  , _______  , _______  , _______  , _______
  ),

  [2] = LAYOUT_universal(
    _______  ,S(KC_QUOT), KC_7     , KC_8    , KC_9     , S(KC_8)  ,                                         S(KC_9)  , S(KC_1)  , S(KC_6)  , KC_LBRC  , S(KC_4)  , _______  ,
    _______  ,S(KC_SCLN), KC_4     , KC_5    , KC_6     , KC_RBRC  ,                                         KC_NUHS  , KC_MINS  , S(KC_EQL), S(KC_3)  , KC_QUOT  , S(KC_2)  ,
    _______  ,S(KC_MINS), KC_1     , KC_2    , KC_3     ,S(KC_RBRC),                                        S(KC_NUHS),S(KC_INT1), KC_EQL   ,S(KC_LBRC),S(KC_SLSH),S(KC_INT3),
                  KC_0     , KC_DOT  , _______  ,         _______  , _______  ,                   KC_DEL   , _______  , _______       , _______  , _______
  ),

  [3] = LAYOUT_universal(
    RGB_TOG  , AML_TO   , AML_I50  , AML_D50  , _______  , _______  ,                                        RGB_M_P  , RGB_M_B  , RGB_M_R  , RGB_M_SW , RGB_M_SN , RGB_M_K  ,
    RGB_MOD  , RGB_HUI  , RGB_SAI  , RGB_VAI  , _______  , SCRL_DVI ,                                        RGB_M_X  , RGB_M_G  , RGB_M_T  , RGB_M_TW , _______  , _______  ,
    RGB_RMOD , RGB_HUD  , RGB_SAD  , RGB_VAD  , _______  , SCRL_DVD ,                                        CPI_D1K  , CPI_D100 , CPI_I100 , CPI_I1K  , _______  , KBC_SAVE ,
                  QK_BOOT  , KBC_RST  , _______  ,        _______  , _______  ,                   _______  , _______  , _______       , KBC_RST  , QK_BOOT
  ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state)
{
  // Auto enable scroll mode when the highest layer is 3
  keyball_set_scroll_mode(get_highest_layer(state) == 3);
  return state;
}

#ifdef OLED_ENABLE

#include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) 
{
  keyball_oled_render_keyinfo();
  keyball_oled_render_ballinfo();
  keyball_oled_render_layerinfo();
}

#endif // OLED_ENABLE
