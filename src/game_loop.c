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

void run_game_loop(sfRenderWindow *window,
framebuffer_t *fb, sfTexture *texture, sfSprite *sprite)
{
    sfEvent event;
    sfVector2u position;
    sfColor     color;

    position.x = 200;
    position.y = 200;
    color.r = 255;
    color.a = 255;
    color.g = 255;
    color.b = 255;

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
           if (event.type == sfEvtClosed)
               sfRenderWindow_close(window);
        }
        my_draw_square(fb, position, 200, color);
        sfTexture_updateFromPixels (texture,
                                    fb->pixels,
                                    800, 800,
                                    0, 0);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
    }
}