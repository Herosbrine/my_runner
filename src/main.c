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

int main()
{
    sfRenderWindow *window = NULL;
    sfVideoMode video_mode;
    sfEvent event;
    video_mode.height = HEIGHT;
    video_mode.width = WIDTH;
    video_mode.bitsPerPixel = 32;
    sfTexture *ttext1;
    ttext1 = sfTexture_createFromFile("images/Background.png", NULL);
    sfSprite *stext1;
    stext1 = sfSprite_create();
    sfSprite_setTexture(stext1, ttext1, 0);

    sfTexture *ttext1a;
    ttext1a = sfTexture_createFromFile("images/sheet_sprite.png", NULL);
    sfSprite *stext1a;
    stext1a = sfSprite_create();
    sfSprite_setTexture(stext1a, ttext1a, 0);
    sfSprite_setPosition(stext1a, (sfVector2f) {75,320});

    sfTexture *ttext1b;
    ttext1b = sfTexture_createFromFile("images/sheet_sprite2.png", NULL);
    sfSprite *stext1b;
    stext1b = sfSprite_create();
    sfSprite_setTexture(stext1b, ttext1b, 0);
    sfSprite_setPosition(stext1b, (sfVector2f) {75,320});

    sfTexture *ttext1c;
    ttext1c = sfTexture_createFromFile("images/sheet_sprite3.png", NULL);
    sfSprite *stext1c;
    stext1c = sfSprite_create();
    sfSprite_setTexture(stext1c, ttext1c, 0);
    sfSprite_setPosition(stext1c, (sfVector2f) {75,320});

    window = sfRenderWindow_create(video_mode,
                                   "My_runner",
                                   sfDefaultStyle,
                                   NULL);
    sfTime time;
    sfClock *clock = sfClock_create();

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        sfRenderWindow_drawSprite(window, stext1, NULL);
        time = sfClock_getElapsedTime(clock);
        if (sfTime_asSeconds(time) < 0.5 && sfTime_asSeconds(time) > 0.2) {
            sfRenderWindow_drawSprite(window, stext1a, NULL);
        }
        if (sfTime_asSeconds(time) > 0.5 && sfTime_asSeconds(time) < 0.8) {
            sfRenderWindow_drawSprite(window, stext1c, NULL);
        }
        if (sfTime_asSeconds(time) < 0.2) {
            sfRenderWindow_drawSprite(window, stext1b, NULL);
        }
        if (sfTime_asSeconds(time) > 0.8) {
            sfClock_restart(clock);
        }
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return (0);
}