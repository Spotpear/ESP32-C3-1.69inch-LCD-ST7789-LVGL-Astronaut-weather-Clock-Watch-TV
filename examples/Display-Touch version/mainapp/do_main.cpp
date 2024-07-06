#include "do_mian.h"
int now_is_auto_play = 1;

void ui_mian(void)
{
    ui_init();
    
    if (is_auto_play)
    {
        auto_play();
    }

    xTaskCreatePinnedToCore(
        [](void *pvParameters)
        {
            while (1)
            {
                int i = digitalRead(9);
                delay(20);
                if (i == 0)
                {
                   
                    now_is_auto_play = !now_is_auto_play;
                    Serial.println("now_is_auto_play is changed to " + String(now_is_auto_play));
                 
                }
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
                if (now_is_auto_play == 0)
                {
                    delay(1000);
                    continue;
                }
                else
                {
                    delay(2000);
                    if (now_is_auto_play == 0)
                    {
                        continue;
                    }
                    _ui_screen_change(ui_Screen4, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
                    delay(3000); //表盘1
                    if (now_is_auto_play == 0)
                    {
                        continue;
                    }
                    _ui_screen_change(ui_Screen5, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
                    delay(3000);  //表盘2
                    if (now_is_auto_play == 0)
                    {
                        continue;
                    }
                    _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
                    delay(3000); //表盘3
                }
            }
        },
        "lvglautoplay", 8192, NULL, 1, NULL, 1);
}
