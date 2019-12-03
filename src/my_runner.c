/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** pixel.c
*/
#include <stdlib.h>
#include <SFML/Graphics/RenderWindow.h>
#include <stdio.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include "struct.h"
#define CSFML_GRAPHICS_API   CSFML_API_IMPORT

framebuffer_t *framebuffer_create(unsigned width, unsigned int height)
{
    framebuffer_t *fb = malloc(sizeof(framebuffer_t));

    fb->pixels = malloc(sizeof(sfUint8) * height * width * 4);
    fb->height = height;
    fb->width = width;
    return (fb);
}

int put_pixel(framebuffer_t *fb, int x, int y , sfColor color)
{
    if (fb->height <= y )
        return (84);
    if (fb->width <= x )
        return (84);
    int width = 0;
    width = fb->width;
    fb->pixels[0 + x * 4 + y * width * 4] = color.r;
    fb->pixels[1+ x * 4 + y * width * 4] = color.g;
    fb->pixels[2+ x * 4 + y * width * 4] = color.b;
    fb->pixels[3+ x * 4 + y * width * 4] = color.a;
    return (0);
}

void my_draw_square(framebuffer_t *buffer, sfVector2u position, unsigned int size, sfColor color)
{
    unsigned int x = 200;
    unsigned int y = 0;

    while (y < position.y + size) {
        put_pixel(buffer, x, y, color);
        if (x == size + position.x) {
            y = y + 1;
            x = 0;
        }
        x++;
    }
}