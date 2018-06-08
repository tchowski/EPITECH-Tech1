
#include "../my_screen.h"

void stat(void)
{
        rect_sky.left = 0;
        rect_sky.top = 0;
        rect_sky.width = 1280;
        rect_sky.height = 1280;
        rect_vege.left = 0;
        rect_vege.top = 0;
        rect_vege.height = 1280;
        rect_vege.width = 1280;
        rect_ground.height = 1280;
        rect_ground.width = 1280;
        rect_mario.top = 0;
        rect_mario.left = 0;
        rect_mario.height = 128;
        rect_mario.width = 128;
        pos.x = 70;
        pos.y = 680;
        video_mode.width = 1280;
        video_mode.height = 960;
        video_mode.bitsPerPixel = 64;
}
