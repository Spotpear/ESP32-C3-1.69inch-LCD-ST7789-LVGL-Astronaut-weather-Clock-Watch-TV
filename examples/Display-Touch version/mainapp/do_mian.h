#include "Arduino.h"
#include "lvgl.h"
#include "ui.h"

//set up the touch screen
#define is_touch 1
//set up the auto play
#define is_auto_play 0
//set up the now_auto play
extern int now_is_auto_play;
// extern int aw;

void ui_mian(void);
void auto_play(void);
