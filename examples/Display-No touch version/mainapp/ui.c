

#include "ui.h"
// #include "do_main.h"
#include <Arduino.h>
///////////////////// VARIABLES ////////////////////
void A1Rs_Animation(lv_obj_t *TargetObject, int delay);
void A1showM_Animation(lv_obj_t *TargetObject, int delay);
void A1showH_Animation(lv_obj_t *TargetObject, int delay);

void ui_event_Screen2(lv_event_t *e);
lv_obj_t *ui_Screen2;
lv_obj_t *ui_Image2;
lv_obj_t *ui_Image3;
lv_obj_t *ui_Image4;
lv_obj_t *ui_Image5;
void ui_event_Screen4(lv_event_t *e);
lv_obj_t *ui_Screen4;
lv_obj_t *ui_Image9;
lv_obj_t *ui_Label4;
lv_obj_t *ui_Label5;
lv_obj_t *ui_Text;

void ui_event_Screen5(lv_event_t *e);
lv_obj_t *ui_Screen5;
lv_obj_t *ui_Image5;
lv_obj_t *ui_Label6;
lv_obj_t *ui_Label7;
lv_obj_t *ui_Label8;
lv_obj_t *ui_Label9;
lv_obj_t *ui_Label10;
lv_obj_t *ui_Label11;
lv_obj_t *ui_Label12;
lv_obj_t *ui_Label13;
lv_obj_t *ui_Label14;
lv_obj_t *ui_Label15;
lv_obj_t *ui_Label16;
lv_obj_t *ui_Label17;
lv_obj_t  *Line1;
lv_obj_t  *Line2;
lv_obj_t  *Line3;
lv_obj_t  *Line4;
lv_obj_t  *Line5;
lv_obj_t  *Line6;
lv_obj_t *ui_Image_TKR;
lv_obj_t *ui_Image_wendu;
lv_obj_t *ui_Image_shidu;

void ui_event_Button2(lv_event_t *e);
lv_obj_t *ui_Button2;
void ui_event_Button1(lv_event_t *e);
lv_obj_t *ui_Button1;
lv_obj_t *ui_Image24;
void ui_event_Button3(lv_event_t *e);
lv_obj_t *ui_Button3;


lv_obj_t *ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
// #if LV_COLOR_DEPTH != 16
// #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
// #endif
// #if LV_COLOR_16_SWAP != 1
// #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
// #endif

///////////////////// ANIMATIONS ////////////////////
void A1Rs_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 60000);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle);
    lv_anim_set_values(&PropertyAnimation_0, 0, 3600);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_angle);
    lv_anim_start(&PropertyAnimation_0);
}
void A1showM_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 3600000);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle);
    lv_anim_set_values(&PropertyAnimation_0, 0, 3600);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_angle);
    lv_anim_start(&PropertyAnimation_0);
}
void A1showH_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 3600000*12);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle);
    lv_anim_set_values(&PropertyAnimation_0, 0, 3600);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);
}




///////////////////// FUNCTIONS ////////////////////  
void ui_event_Screen2(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_SCREEN_LOADED)
    {
        A1Rs_Animation(ui_Image4, 0);   //秒针 转动
        A1showM_Animation(ui_Image3, 0);
        // A1showH_Animation(ui_Image5, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) //LV_EVENT_GESTURE:检测到手势。 通过函数获取手势lv_indev_get_gesture_dir(lv_indev_get_act());  LV_DIR_LEFT LV_DIR_RIGHT LV_DIR_TOP LV_DIR_BOTTOM
    {
        _ui_screen_change(ui_Screen4, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0); //LV_SCR_LOAD_ANIM_MOVE_LEFT:新屏幕和当前屏幕都按指定的方向移动
    }
    // if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP)
    // {
    //     _ui_screen_change(ui_Screen6, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0); //LV_SCR_LOAD_ANIM_FADE_ON:将新屏幕淡入旧屏幕
    // }
}
void ui_event_Screen4(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);

    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM) //画面切换LV_DIR_LEFT
    {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP)
    {
        _ui_screen_change(ui_Screen5, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
    }
    // if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP)
    // {
    //     _ui_screen_change(ui_Screen6, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0); //将新屏幕淡入旧屏幕
    // }
}

void ui_event_Screen5(lv_event_t *e)
{
  lv_event_code_t event_code = lv_event_get_code(e);
  lv_obj_t *target = lv_event_get_target(e);

  if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM)
    {
        _ui_screen_change(ui_Screen4, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0);
    }
}

void ui_event_Button2(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}


///////////////////// SCREENS ////////////////////

void ui_Screen5_screen_init(void)//太空人时钟
{
    ui_Screen5 = lv_obj_create(NULL); //创建一个屏幕
    lv_obj_clear_flag(ui_Screen5, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_Screen5, lv_color_hex(0xFFFFFF), LV_PART_MAIN);

  
    //-----------------------------------
    ui_Label6 = lv_label_create(ui_Screen5); //时
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label6, -59);
    lv_obj_set_y(ui_Label6, -43);
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_Label6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(ui_Label6, shi);
    lv_obj_set_style_text_font(ui_Label6, &ui_font_FontTop, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_Screen5); //分
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label7, 53);
    lv_obj_set_y(ui_Label7, -43);
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_Label7, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(ui_Label7, fen);
    lv_obj_set_style_text_font(ui_Label7, &ui_font_FontTop, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label8 = lv_label_create(ui_Screen5); //:
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label8, -1);
    lv_obj_set_y(ui_Label8, -50);
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_Label8, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(ui_Label8, ":");
    lv_obj_set_style_text_font(ui_Label8, &ui_font_FontTop, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image_shidu = lv_img_create(ui_Screen5);  //湿度图标
    lv_img_set_src(ui_Image_shidu, &shidu_tp);
    lv_obj_set_width(ui_Image_shidu, LV_SIZE_CONTENT);  /// 30
    lv_obj_set_height(ui_Image_shidu, LV_SIZE_CONTENT); /// 30
    lv_obj_set_x(ui_Image_shidu, 65);  //相对于父轴的偏移位置
    lv_obj_set_y(ui_Image_shidu, 30);
    lv_obj_set_align(ui_Image_shidu, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image_shidu, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image_shidu, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image_wendu = lv_img_create(ui_Screen5); //温度图标
    lv_img_set_src(ui_Image_wendu, &wendu_tp);
    lv_obj_set_width(ui_Image_wendu, LV_SIZE_CONTENT);  /// 30
    lv_obj_set_height(ui_Image_wendu, LV_SIZE_CONTENT); /// 30
    lv_obj_set_x(ui_Image_wendu, -105);  //相对于父轴的偏移位置
    lv_obj_set_y(ui_Image_wendu, 30);
    lv_obj_set_align(ui_Image_wendu, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image_wendu, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image_wendu, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label8 = lv_label_create(ui_Screen5); //:
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label8, -50);
    lv_obj_set_y(ui_Label8, -105);
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_Label8, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(ui_Label8, "今日天气:");
    lv_obj_set_style_text_font(ui_Label8, &syzt_a_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label9 = lv_label_create(ui_Screen5); //天气信息
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label9, 50);
    lv_obj_set_y(ui_Label9, -105);
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_Label9, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(ui_Label9, tianqi_l);//
    lv_obj_set_style_text_font(ui_Label9, &syzt_a_20, LV_PART_MAIN | LV_STATE_DEFAULT);
    
    ui_Label10 = lv_label_create(ui_Screen5); //:  湿度
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label10, 98);
    lv_obj_set_y(ui_Label10, 30);
    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_Label10, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(ui_Label10, shidu_l1);
    lv_obj_set_style_text_font(ui_Label10, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label12 = lv_label_create(ui_Screen5); //:  温度
    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label12, -75);
    lv_obj_set_y(ui_Label12, 30);
    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_Label12, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(ui_Label12, wendu_l2);
    lv_obj_set_style_text_font(ui_Label12, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label11 = lv_label_create(ui_Screen5); //:城市
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label11, -100);
    lv_obj_set_y(ui_Label11, 103);
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(ui_Label11, chenshi);
    lv_obj_set_style_text_font(ui_Label11, &syzt_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label13 = lv_label_create(ui_Screen5); //:
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label13, 95);
    lv_obj_set_y(ui_Label13, 73);
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_Label13, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(ui_Label13, "周");
    lv_obj_set_style_text_font(ui_Label13, &syzt_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label15 = lv_label_create(ui_Screen5); //:星期
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label15, 95);
    lv_obj_set_y(ui_Label15, 103);
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_Label15, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(ui_Label15, xq_l);
    lv_obj_set_style_text_font(ui_Label15, &syzt_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label14 = lv_label_create(ui_Screen5); //:日历
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label14, 15);
    lv_obj_set_y(ui_Label14, 103);
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_Label14, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(ui_Label14, rili_l);//rili_l
    lv_obj_set_style_text_font(ui_Label14, &syzt_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label16 = lv_label_create(ui_Screen5); //:空气质量
    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label16, 5);
    lv_obj_set_y(ui_Label16, 71);
    lv_obj_set_align(ui_Label16, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_Label16, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(ui_Label16, tqzl_l);
    lv_obj_set_style_text_font(ui_Label16, &syzt_a_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label17 = lv_label_create(ui_Screen5); //:
    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label17, -55);
    lv_obj_set_y(ui_Label17, 71);
    lv_obj_set_align(ui_Label17, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_Label17, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(ui_Label17, "空气质量:");
    lv_obj_set_style_text_font(ui_Label17, &syzt_a_20, LV_PART_MAIN | LV_STATE_DEFAULT);


    Line1 = lv_line_create(ui_Screen5);
    static lv_point_t line_points[] = { {0, 28}, {280, 28}};
    lv_line_set_points(Line1, line_points, sizeof(line_points) / sizeof(lv_point_t));
    lv_obj_set_style_line_width(Line1, 3, LV_PART_MAIN);
    lv_obj_set_style_line_color(Line1, lv_color_hex(0x000000), LV_PART_MAIN);

    Line2 = lv_line_create(ui_Screen5);
    static lv_point_t line_points1[] = { {0, 175}, {280, 175}};
    lv_line_set_points(Line2, line_points1, sizeof(line_points1) / sizeof(lv_point_t));
    lv_obj_set_style_line_width(Line2, 3, LV_PART_MAIN);
    lv_obj_set_style_line_color(Line2, lv_color_hex(0x000000), LV_PART_MAIN);

    Line3 = lv_line_create(ui_Screen5);
    static lv_point_t line_points2[] = { {198, 175}, {198, 280}};
    lv_line_set_points(Line3, line_points2, sizeof(line_points2) / sizeof(lv_point_t));
    lv_obj_set_style_line_width(Line3, 3, LV_PART_MAIN);
    lv_obj_set_style_line_color(Line3, lv_color_hex(0x000000), LV_PART_MAIN);

    Line4 = lv_line_create(ui_Screen5);
    static lv_point_t line_points3[] = { {0, 206}, {198, 206}};
    lv_line_set_points(Line4, line_points3, sizeof(line_points3) / sizeof(lv_point_t));
    lv_obj_set_style_line_width(Line4, 3, LV_PART_MAIN);
    lv_obj_set_style_line_color(Line4, lv_color_hex(0x000000), LV_PART_MAIN);

    Line5 = lv_line_create(ui_Screen5);
    static lv_point_t line_points4[] = { {107, 207}, {107, 280}};
    lv_line_set_points(Line5, line_points4, sizeof(line_points4) / sizeof(lv_point_t));
    lv_obj_set_style_line_width(Line5, 3, LV_PART_MAIN);
    lv_obj_set_style_line_color(Line5, lv_color_hex(0x000000), LV_PART_MAIN);

    // Line6 = lv_line_create(ui_Screen5);
    // static lv_point_t line_points5[] = { {0, 274}, {160, 274}};
    // lv_line_set_points(Line6, line_points5, sizeof(line_points5) / sizeof(lv_point_t));
    // lv_obj_set_style_line_width(Line6, 3, LV_PART_MAIN);
    // lv_obj_set_style_line_color(Line6, lv_color_hex(0x000000), LV_PART_MAIN);

    ui_Image_TKR = lv_gif_create(ui_Screen5);
    lv_obj_center(ui_Image_TKR);
    lv_obj_align(ui_Image_TKR, LV_ALIGN_LEFT_MID, 105, 20);
    lv_gif_set_src(ui_Image_TKR, &TKR);

    // ui_Image_TKR = lv_img_create(ui_Screen5);
    // lv_img_set_src(ui_Image_TKR, &TKR);
    // lv_obj_set_width(ui_Image_TKR, LV_SIZE_CONTENT);  
    // lv_obj_set_height(ui_Image_TKR, LV_SIZE_CONTENT); 
    // lv_obj_set_align(ui_Image_TKR, LV_ALIGN_CENTER);
    // lv_obj_add_flag(ui_Image_TKR, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    // lv_obj_clear_flag(ui_Image_TKR, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    lv_obj_add_event_cb(ui_Screen5, ui_event_Screen5, LV_EVENT_ALL, NULL);
}

void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image2 = lv_img_create(ui_Screen2); //指针背景
    lv_img_set_src(ui_Image2, &ui_img_watch_back_1_png);
    lv_obj_set_width(ui_Image2, 280);  
    lv_obj_set_height(ui_Image2, 240); 
    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image3 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image3, &ui_img_watch_back_1_m_png); //分指针
    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);  
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT); 
    lv_obj_set_x(ui_Image3, 28);
    lv_obj_set_y(ui_Image3, 38);
    lv_obj_set_align(ui_Image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_img_set_pivot(ui_Image3, -3, -10);  //设置旋转轴点 默认情况下，旋转的枢轴点是图像的中心。可以使用 更改 。 是左上角
    lv_img_set_angle(ui_Image3, 2100 + (60*min_a) ); 

    ui_Image4 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image4, &ui_img_watch_back_1_s_png); //秒指针
    lv_obj_set_width(ui_Image4, LV_SIZE_CONTENT);  
    lv_obj_set_height(ui_Image4, LV_SIZE_CONTENT); 
    lv_obj_set_x(ui_Image4, 17);
    lv_obj_set_y(ui_Image4, 37);
    lv_obj_set_align(ui_Image4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image4, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image4, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_img_set_pivot(ui_Image4, 10, 11);
    lv_img_set_angle(ui_Image4, 2070 + (60*sec) );

    ui_Image5 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image5, &ui_img_watch_back_1_h_png); //时指针
    lv_obj_set_width(ui_Image5, LV_SIZE_CONTENT);  
    lv_obj_set_height(ui_Image5, LV_SIZE_CONTENT); 
    lv_obj_set_x(ui_Image5, -13);
    lv_obj_set_y(ui_Image5, 30);
    lv_obj_set_align(ui_Image5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image5, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image5, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_img_set_pivot(ui_Image5, 26, -8);
    lv_img_set_angle(ui_Image5, 1600 + (300*hou) + (5*min_a));
    // lv_img_set_angle(ui_Image5, 1600 + (300*10));
    lv_obj_add_event_cb(ui_Screen2, ui_event_Screen2, LV_EVENT_ALL, NULL);
}


void ui_Screen4_screen_init(void)
{
    ui_Screen4 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen4, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    
    ui_Image9 = lv_img_create(ui_Screen4);
    lv_img_set_src(ui_Image9, &ui_img_bg3_png);
    lv_obj_set_width(ui_Image9, 280);  /// 1
    lv_obj_set_height(ui_Image9, 240); /// 1
    lv_obj_set_align(ui_Image9, LV_ALIGN_CENTER);
    lv_obj_set_grid_cell(ui_Image9, LV_GRID_ALIGN_STRETCH, 1, 1, LV_GRID_ALIGN_STRETCH, 1, 1);
    lv_obj_add_flag(ui_Image9, LV_OBJ_FLAG_SCROLL_ON_FOCUS);  /// Flags
    lv_obj_clear_flag(ui_Image9, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags


    ui_Label4 = lv_label_create(ui_Screen4);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label4, -3);
    lv_obj_set_y(ui_Label4, -29);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, shi);
    lv_obj_set_style_text_font(ui_Label4, &ui_font_FontTop, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_Screen4);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label5, 0);
    lv_obj_set_y(ui_Label5, 38);
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, fen);
    lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0xFF5D18), LV_PART_MAIN | LV_STATE_DEFAULT); //设置局部字体颜色
    lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT); 
    lv_obj_set_style_text_font(ui_Label5, &ui_font_FontBottom, LV_PART_MAIN | LV_STATE_DEFAULT); //设置字体
    // lv_scr_load_anim(ui_Label5, LV_SCR_LOAD_ANIM_NONE, 60000, 1, true);

    lv_obj_add_event_cb(ui_Screen4, ui_event_Screen4, LV_EVENT_ALL, NULL);
}

void ui_init(void)
{
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                              true, LV_FONT_DEFAULT);
    ui_Screen2_screen_init(); //开机默认表盘 带指针
    ui_Screen4_screen_init();//表盘1 有橙色数字
    ui_Screen5_screen_init();//太空人时钟表盘

    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_Screen2);
}
