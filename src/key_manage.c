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

void key_up(data_t *texture, sprite_t *sprite)
{
    if (sprite->b >= 45 && sprite->b <= 192
    && sprite->bol != 3 && sprite->bol != 5) {
        sfRenderWindow_drawSprite(texture->window, sprite->stext1b, NULL);
        sprite->bol = 5;
    }
    if (sfKeyboard_isKeyPressed(sfKeyUp) && sprite->bol == 1) {
        sfSprite_setPosition(sprite->stext1aa, (sfVector2f) {75, 200});
        sfRenderWindow_drawSprite(texture->window, sprite->stext1aa, NULL);
        if (sfTime_asSeconds(texture->time) < 0.2)
            sfRenderWindow_drawSprite(texture->window, sprite->stext3, NULL);
        if (sfTime_asSeconds(texture->time) > 0.2
        && sfTime_asSeconds(texture->time) < 0.4)
            sfRenderWindow_drawSprite(texture->window, sprite->stext3a, NULL);
        if (sfTime_asSeconds(texture->time) > 0.4
        && sfTime_asSeconds(texture->time) < 0.6)
            sfRenderWindow_drawSprite(texture->window, sprite->stext3, NULL);
        if (sfTime_asSeconds(texture->time) > 0.6)
            sfRenderWindow_drawSprite(texture->window, sprite->stext3a, NULL);
        sprite->bol = 2;
    }
}

void condition_down(data_t *texture, sprite_t *sprite)
{
    if (sfTime_asSeconds(texture->time) > 0.4
    && sfTime_asSeconds(texture->time) < 0.6) {
        sfRenderWindow_drawSprite(texture->window, sprite->stext2, NULL);
        sfRenderWindow_drawSprite(texture->window, sprite->stext3, NULL);
    }
    if (sfTime_asSeconds(texture->time) > 0.6) {
        sfRenderWindow_drawSprite(texture->window, sprite->stext2a, NULL);
        sfRenderWindow_drawSprite(texture->window, sprite->stext3a, NULL);
    }
}

void key_down(data_t *texture, sprite_t *sprite)
{
    if (sfKeyboard_isKeyPressed(sfKeyDown) && sprite->bol == 1) {
        if (sfTime_asSeconds(texture->time) < 0.2) {
            sfRenderWindow_drawSprite(texture->window, sprite->stext3, NULL);
            sfRenderWindow_drawSprite(texture->window, sprite->stext2, NULL);
        }
        if (sfTime_asSeconds(texture->time) > 0.2
        && sfTime_asSeconds(texture->time) < 0.4) {
            sfRenderWindow_drawSprite(texture->window, sprite->stext3a, NULL);
            sfRenderWindow_drawSprite(texture->window, sprite->stext2a, NULL);
        }
        condition_down(texture, sprite);
        sprite->bol = 3;
    }
}