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

void destroy_resources(sfRenderWindow *window,
framebuffer_t *fb, sfTexture *texture, sfSprite *sprite)
{
    sfRenderWindow_destroy(window);
    framebuffer_destroy(fb);
    sfTexture_destroy(texture);
    sfSprite_destroy(sprite);
}