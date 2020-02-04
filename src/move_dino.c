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

void move_dino(data_t *texture, sprite_t *sprite)
{
    if (sprite->c >= 45 && sprite->c <= 200
    && sprite->bol != 2 && sprite->bol != 5) {
        sfRenderWindow_drawSprite(texture->window, sprite->stext1b, NULL);
        sprite->bol = 5;
    }
        sfRenderWindow_drawSprite(texture->window, sprite->stext4a, NULL);
    if (sfTime_asSeconds(texture->time) <= 0.2 && sprite->bol == 1) {
        sfRenderWindow_drawSprite(texture->window, sprite->stext1b, NULL);
        sfRenderWindow_drawSprite(texture->window, sprite->stext3, NULL);
    }
    if (sfTime_asSeconds(texture->time) <= 0.5
    && sfTime_asSeconds(texture->time) >= 0.2 && sprite->bol == 1) {
        sfRenderWindow_drawSprite(texture->window, sprite->stext1a, NULL);
        sfRenderWindow_drawSprite(texture->window, sprite->stext3a, NULL);
    }
    if (sfTime_asSeconds(texture->time) >= 0.5
    && sfTime_asSeconds(texture->time) <= 0.8 && sprite->bol == 1) {
        sfRenderWindow_drawSprite(texture->window, sprite->stext1c, NULL);
        sfRenderWindow_drawSprite(texture->window, sprite->stext3, NULL);
    }
}