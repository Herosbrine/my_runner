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

void game_loop(data_t *texture, sprite_t *sprite)
{
    sfRenderWindow_drawSprite(texture->window, sprite->stext1, NULL);
    sfRenderWindow_drawSprite(texture->window, sprite->stext1d, NULL);
    sfRenderWindow_drawSprite(texture->window, sprite->stext1e, NULL);
    sfRenderWindow_drawSprite(texture->window, sprite->stext1f, NULL);
    texture->time = sfClock_getElapsedTime(texture->clock);
    sprite->x = sprite->x - 10;
    sprite->y = sprite->y - 4;
    sprite->z = sprite->z - 1;
    if (sprite->c > 1480)
        sprite->b = sprite->b - 15;
    if (sprite->b > 1480)
        sprite->c = sprite->c - 10;
    sfSprite_setPosition(sprite->stext1d, (sfVector2f) {sprite->x, 450});
    sfSprite_setPosition(sprite->stext1e, (sfVector2f) {sprite->y, 0});
    sfSprite_setPosition(sprite->stext1f, (sfVector2f) {sprite->z, 50});
    sfSprite_setPosition(sprite->stext3, (sfVector2f) {sprite->b, 320});
    sfSprite_setPosition(sprite->stext3a, (sfVector2f) {sprite->b, 300});
    sfSprite_setPosition(sprite->stext4a, (sfVector2f) {sprite->c, 400});
}