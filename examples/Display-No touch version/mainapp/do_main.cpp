#include "do_mian.h"

void ui_mian(void)
{
    ui_init();
    
    if (is_no_touch)
    {  
        auto_play();
    }
    xTaskCreatePinnedToCore(
        [](void *pvParameters)
        {
            while (1)
            {
              
            }
        },
        "lvglpx", 4096, NULL, 1, NULL, 1);
}
void auto_play(void)
{
  xTaskCreatePinnedToCore(
        [](void *pvParameters)
        {
          while (1)
            {       
              delay(300);
              if(Clock==digital_Clock&&a==1)
              {
                _ui_screen_change(ui_Screen4, LV_SCR_LOAD_ANIM_MOVE_LEFT, 300, 0);
                a=0;
              }
              else if(Clock==Astronaut_Clock&&a==1)
              { 
                _ui_screen_change(ui_Screen5, LV_SCR_LOAD_ANIM_MOVE_LEFT, 300, 0);
                a=0;
              }
              else if(Clock==Hand_Clock&&a==1)
              {
                _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_MOVE_LEFT, 300, 0);
                a=0;
              }
            }
        },
        "lvglautoplay", 8192, NULL, 1, NULL, 1);
}
