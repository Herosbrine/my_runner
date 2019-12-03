/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** main.c
*/

#include <stdlib.h>
#include <SFML/Graphics/RenderWindow.h>
#include <stdio.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include "struct.h"
#define CSFML_GRAPHICS_API   CSFML_API_IMPORT

int main(int ac, char **argv)
{
    sfRenderWindow  *window;
    framebuffer_t   *fb;
    sfTexture       *texture;
    sfSprite        *sprite;

  //  sfVector2u position;
    sfColor     color;

   // position.x = 200;
   // position.y = 200;
    color.r = 255;
    color.a = 255;
    color.g = 255;
    color.b = 255;
    int x = 0;
    int y = 0;

    if (ac != 2)
        return (84);
    if (argv[1][0] == '-' && argv[1][1] == 'h') {
        help();
        return (0);
    }
    init_resources(&window, &fb, &texture, &sprite);
    if (put_pixel(fb, x, y, color) == 84)
        return (84);
    run_game_loop(window, fb, texture, sprite);
    destroy_resources(window, fb, texture, sprite);
    return (0);
}