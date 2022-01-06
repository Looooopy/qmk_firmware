#pragma once

#define TG_COH3G TG(_GAME_COH3_GRID)
#define OS_COH3G OSL(_GAME_COH3_GRID)

#define TG_COH3C TG(_GAME_COH3_CMD)
#define OS_COH3C OSL(_GAME_COH3_CMD)

// NOTE: Don't forget end of file LINE FEED
#define COH3_CMD_LAYER_6x6 LAYOUT_6x6( \
    QWERTY ,C3_CGS1,C3_CGC2,C3_CGC3,C3_CGC4,C3_CGC5,                C3_CGC1,C3_CGC2,C3_CGC3,C3_CGC4,C3_CGC5,_______,\
    KC_ESC ,C3_AA1 ,C3_AA2 ,C3_AA3 ,C3_AA4 ,C3_AA5 ,                _______,_______,_______,_______,_______,_______,\
    KC_LCTL,C3_PB1 ,C3_PB2 ,C3_PB3 ,C3_PB4 ,C3_PB5 ,                XXXXXXX,XXXXXXX,C3_CPU ,XXXXXXX,XXXXXXX,XXXXXXX,\
    KC_LSFT,C3_CGP1,C3_CGP2,C3_CGP3,C3_CGP4,C3_CGP5,                XXXXXXX,C3_CPL ,C3_CPD ,C3_CPR ,XXXXXXX,XXXXXXX,\
    KC_LALT,C3_CGA1,C3_CGA2,C3_CGA3,C3_CGA4,C3_CGA5,                XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,\
                    C3_FHM ,C3_SEL,                                                _______,_______,\
                                        TG_COH3C,KC_R  ,         XXXXXXX,KC_ENT,\
                                        C3_PAT ,KC_TAB ,         XXXXXXX,_______,\
                                        C3_PDF ,C3_PQS ,         XXXXXXX,XXXXXXX\
)

#define COH3_GRID_LAYER_6x6 LAYOUT_6x6( \
    QWERTY ,C3_CGS1,C3_CGC2,C3_CGC3,C3_CGC4,C3_CGC5,                C3_CGC1,C3_CGC2,C3_CGC3,C3_CGC4,C3_CGC5,_______,\
    KC_ESC ,C3_PB1 ,C3_PB2 ,C3_PB3 ,C3_PB4 ,C3_PB5 ,                _______,_______,_______,_______,_______,_______,\
    KC_LCTL,C3_GQ  ,C3_GW  ,C3_GE  ,C3_GR  ,C3_GT  ,                _______,_______,_______,_______,_______,_______,\
    KC_LSFT,C3_GA  ,C3_GS  ,C3_GD  ,C3_GF  ,C3_GG  ,                _______,_______,_______,_______,_______,_______,\
    KC_LALT,C3_GZ  ,C3_GX  ,C3_GC  ,C3_GV  ,C3_GB  ,                _______,_______,_______,_______,_______,_______,\
                    C3_FHM ,C3_GY,                                                _______,_______,\
                                        TG_COH3C,KC_R  ,         XXXXXXX,KC_ENT,\
                                        C3_PAT ,KC_TAB ,         XXXXXXX,_______,\
                                        C3_PDF ,C3_PQS ,         XXXXXXX,XXXXXXX\
)
