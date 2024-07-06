#include "Arduino.h"
#include "lvgl.h"
#include "ui.h"

//set up the touch screen
#define is_touch         0
//set up the is_no_touch
#define is_no_touch      1

#define Hand_Clock       1
#define digital_Clock    2
#define Astronaut_Clock  3

extern short Clock;
extern char a;
void ui_mian(void);
void auto_play(void);
