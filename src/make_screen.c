/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** my_runner.c
*/
#define WIDTH 1490;
#define HEIGHT 1005;
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Config.h>
#include <time.h>
#include <stdlib.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/Time.h>
#include <SFML/System/Vector3.h>
#include <SFML/Audio.h>
#include "struct.h"

void make_screen(data_t *texture, sprite_t *sprite)
{
    texture->window = NULL;
    sfVideoMode video_mode;
    sfEvent event;
    video_mode.height = HEIGHT;
    video_mode.width = WIDTH;
    video_mode.bitsPerPixel = 32;
    sprite->x = 0;
    sprite->y = 0;
    sprite->z = 1888;
    sprite->bol = 1;
    sprite->b = 4000;
    sprite->c = 2500;
    init_var(texture, sprite);
    texture->window = sfRenderWindow_create(video_mode,
                                            "My_runner",
                                            sfDefaultStyle,
                                            NULL);
    texture->clock = sfClock_create();
    my_runner(texture, sprite, event);
}