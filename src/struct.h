/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** struct.h
*/

#include <SFML/Graphics/RenderWindow.h>
#include <stdio.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>

typedef struct fb {
    sfUint8 *pixels;
    int width;
    int height;
} framebuffer_t;

void run_game_loop(sfRenderWindow *window,
framebuffer_t *fb, sfTexture *texture, sfSprite *sprite);
void destroy_resources(sfRenderWindow *window,
framebuffer_t *fb, sfTexture *texture, sfSprite *sprite);
void init_resources(sfRenderWindow **window,
framebuffer_t **fb, sfTexture **texture, sfSprite **sprite);
void framebuffer_destroy(framebuffer_t *fb);
void my_draw_square(framebuffer_t *buffer, sfVector2u position, unsigned int size, sfColor color);
int put_pixel(framebuffer_t *fb, int x, int y , sfColor color);
framebuffer_t *framebuffer_create(unsigned width, unsigned int height);
void help();
void my_putchar(char c);
int my_putstr(char const *str);