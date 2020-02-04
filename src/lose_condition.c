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

void lose_condition(data_t *texture, sprite_t *sprite)
{
    if (sfTime_asSeconds(texture->time) >= 0.8)
        sfClock_restart(texture->clock);
    if (sprite->bol == 5) {
        sfRenderWindow_drawSprite(texture->window, sprite->stext10, NULL);
        sfRenderWindow_drawSprite(texture->window, sprite->stext11, NULL);
        sfRenderWindow_setFramerateLimit(texture->window, 60);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            destroy_item(texture, sprite);
            main();
        }
    }
    sfRenderWindow_display(texture->window);
    if (sprite->bol != 5)
        sprite->bol = 1;
}