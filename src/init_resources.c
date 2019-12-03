/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** my_runner.c
*/

#include <stdlib.h>
#include <SFML/Graphics/RenderWindow.h>
#include <stdio.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include "struct.h"
#define CSFML_GRAPHICS_API   CSFML_API_IMPORT

void init_resources(sfRenderWindow **window,
framebuffer_t **fb, sfTexture **texture, sfSprite **sprite)
{
    sfVideoMode     video_mode;

    video_mode.width = 800;
    video_mode.height = 800;
    video_mode.bitsPerPixel = 32;

    *window = sfRenderWindow_create(video_mode,
                                "My Window",
                                sfDefaultStyle,
                                NULL);
    *fb = framebuffer_create(800, 800);
    *texture = sfTexture_create(800, 800);
    *sprite = sfSprite_create();
    sfSprite_setTexture(*sprite, *texture, sfFalse);
}