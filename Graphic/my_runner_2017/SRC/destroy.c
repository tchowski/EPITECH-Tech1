
#include "../my_screen.h"

void destroy(void)
{
	sfRenderWindow_destroy(window);
        sfTexture_destroy(sky);
        sfTexture_destroy(vege);
        sfTexture_destroy(ground);
        sfTexture_destroy(mario);
        sfSprite_destroy(mario_p);
        sfSprite_destroy(ground_p);
        sfSprite_destroy(sky_p);
        sfSprite_destroy(vege_p);
        sfSound_destroy(sound);
        sfSoundBuffer_destroy(soundbuffer);
        sfSound_destroy(soundduck);
        sfSoundBuffer_destroy(shoot);
        sfClock_destroy(sprite_sky);
        sfClock_destroy(sprite_vege);
        sfClock_destroy(sprite_ground);
}

