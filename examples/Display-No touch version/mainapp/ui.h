

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"
#include "ui_helpers.h"
#include "ui_events.h"

void A0logo_in_Animation(lv_obj_t * TargetObject, int delay);
void A0_label_Animation(lv_obj_t * TargetObject, int delay);
void A1Rs_Animation(lv_obj_t * TargetObject, int delay);
void A1showM_Animation(lv_obj_t * TargetObject, int delay);
void A1showH_Animation(lv_obj_t * TargetObject, int delay);
void A2_top_Animation(lv_obj_t * TargetObject, int delay);
void A2_bottom_Animation(lv_obj_t * TargetObject, int delay);
void A3_pos1_Animation(lv_obj_t * TargetObject, int delay);
void A3_top_in_Animation(lv_obj_t * TargetObject, int delay);
void A3_top_bottom_Animation(lv_obj_t * TargetObject, int delay);
void A7_0_Animation(lv_obj_t * TargetObject, int delay);
void A5_0_Animation(lv_obj_t * TargetObject, int delay);
void A5_1_Animation(lv_obj_t * TargetObject, int delay);
void A6_0_Animation(lv_obj_t * TargetObject, int delay);
void A6_1_Animation(lv_obj_t * TargetObject, int delay);


extern short hou;
extern short min_a;
extern short sec;
extern char shi[10];
extern char fen[10];
extern char wendu_l2[10];
extern char shidu_l1[10];
extern char rili_l[10];
extern char xq_l[10];
extern char chenshi[20];
extern char tianqi_l[20];
extern char tqzl_l[20];

void ui_event_Screen3(lv_event_t * e);
extern lv_obj_t * ui_Screen3;
void ui_event_Screen1(lv_event_t * e);
void ui_change_play_icon1(lv_event_t * e);
void ui_change_play_icon2(lv_event_t * e);
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Image1;
extern lv_obj_t * ui_Image6;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_Smart_Watch;
extern lv_obj_t * ui_Image8;
void ui_event_Screen2(lv_event_t * e);
extern lv_obj_t * ui_Screen2;
extern lv_obj_t * ui_Image2;
extern lv_obj_t * ui_Image3;
extern lv_obj_t * ui_Image4;
extern lv_obj_t * ui_Image5;
void ui_event_Screen4(lv_event_t * e);
extern lv_obj_t * ui_Screen4;
extern lv_obj_t * ui_Image9;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_Label5;
extern lv_obj_t *ui_Text;

void ui_event_Screen5(lv_event_t * e);
extern lv_obj_t * ui_Screen5;
extern lv_obj_t * ui_Label6;
extern lv_obj_t * ui_Label7;


void ui_event_Button2(lv_event_t * e);
extern lv_obj_t * ui_Button2;
void ui_event_Button1(lv_event_t * e);
extern lv_obj_t * ui_Button1;
extern lv_obj_t * ui_Image24;
void ui_event_Button3(lv_event_t * e);
extern lv_obj_t * ui_Button3;
extern lv_obj_t * ui____initial_actions0;


LV_IMG_DECLARE(ui_img_watch_back_0_png);    // assets\watch_back_0.png
LV_IMG_DECLARE(ui_img_watch_back_1_png);    // assets\watch_back_1.png
LV_IMG_DECLARE(ui_img_watch_back_1_m_png);    // assets\watch_back_1_m.png
LV_IMG_DECLARE(ui_img_watch_back_1_s_png);    // assets\watch_back_1_s.png
LV_IMG_DECLARE(ui_img_watch_back_1_h_png);    // assets\watch_back_1_h.png
LV_IMG_DECLARE(ui_img_bg3_png);    // assets\watch_back_4.png
LV_IMG_DECLARE(black);
LV_IMG_DECLARE(TKR);
LV_IMG_DECLARE(shidu_tp);
LV_IMG_DECLARE(wendu_tp);

LV_FONT_DECLARE(ui_font_FontBottom);
LV_FONT_DECLARE(ui_font_FontTop);
LV_FONT_DECLARE(syzt_20);
LV_FONT_DECLARE(syzt_35);
LV_FONT_DECLARE(syzt_30);
LV_FONT_DECLARE(syzt_Light_20);
LV_FONT_DECLARE(syzt_a_20);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
