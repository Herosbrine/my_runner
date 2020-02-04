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

void destroy_item2(data_t *texture, sprite_t *sprite)
{
    sfSprite_destroy(sprite->stext1);
    sfSprite_destroy(sprite->stext1a);
    sfSprite_destroy(sprite->stext1b);
    sfSprite_destroy(sprite->stext1c);
    sfSprite_destroy(sprite->stext1d);
    sfSprite_destroy(sprite->stext2a);
    sfSprite_destroy(sprite->stext3);
    sfSprite_destroy(sprite->stext3a);
    sfSprite_destroy(sprite->stext4a);
    sfSprite_destroy(sprite->stext10);
    sfSoundBuffer_destroy(texture->sbang);
    sfSound_destroy(texture->bang);
    sfRenderWindow_destroy(texture->window);
}

void destroy_item(data_t *texture, sprite_t *sprite)
{
    sfTexture_destroy(texture->ttext1);
    sfTexture_destroy(texture->ttext1e);
    sfTexture_destroy(texture->ttext1f);
    sfTexture_destroy(texture->ttext1a);
    sfTexture_destroy(texture->ttext1b);
    sfTexture_destroy(texture->ttext1c);
    sfTexture_destroy(texture->ttext1d);
    sfTexture_destroy(texture->ttext2a);
    sfTexture_destroy(texture->ttext3);
    sfTexture_destroy(texture->ttext3a);
    sfTexture_destroy(texture->ttext4a);
    sfTexture_destroy(texture->ttext10);
    destroy_item2(texture, sprite);
}