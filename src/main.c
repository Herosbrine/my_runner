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
    int x = 0;
    int y = 0;
    int z = 1888;
    int bol = 1;
    int b = 4000;
    int c = 2500;

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

    sfTexture *ttext1aa;
    ttext1aa = sfTexture_createFromFile("images/sheet_sprite.png", NULL);
    sfSprite *stext1aa;
    stext1aa = sfSprite_create();
    sfSprite_setTexture(stext1aa, ttext1aa, 0);
    sfSprite_setPosition(stext1aa, (sfVector2f) {75,320});

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

    sfTexture *ttext1d;
    ttext1d = sfTexture_createFromFile("images/ground.png", NULL);
    sfSprite *stext1d;
    stext1d = sfSprite_create();
    sfSprite_setTexture(stext1d, ttext1d, 0);
    sfSprite_setPosition(stext1d, (sfVector2f) {x,450});

    sfTexture *ttext2;
    ttext2 = sfTexture_createFromFile("images/down_sprite.png", NULL);
    sfSprite *stext2;
    stext2 = sfSprite_create();
    sfSprite_setTexture(stext2, ttext2, 0);
    sfSprite_setPosition(stext2, (sfVector2f) {75, 420});

    sfTexture *ttext2a;
    ttext2a = sfTexture_createFromFile("images/down_sprite2.png", NULL);
    sfSprite *stext2a;
    stext2a = sfSprite_create();
    sfSprite_setTexture(stext2a, ttext2a, 0);
    sfSprite_setPosition(stext2a, (sfVector2f) {75, 420});

    sfTexture *ttext1e;
    ttext1e = sfTexture_createFromFile("images/sky.png", NULL);
    sfSprite *stext1e;
    stext1e = sfSprite_create();
    sfSprite_setTexture(stext1e, ttext1e, 0);
    sfSprite_setPosition(stext1e, (sfVector2f) {y, 0});

    sfTexture *ttext1f;
    ttext1f = sfTexture_createFromFile("images/moon.png", NULL);
    sfSprite *stext1f;
    stext1f = sfSprite_create();
    sfSprite_setTexture(stext1f, ttext1f, 0);
    sfSprite_setPosition(stext1f, (sfVector2f) {z, 50});

    sfTexture *ttext3;
    ttext3 = sfTexture_createFromFile("images/bird.png", NULL);
    sfSprite *stext3;
    stext3 = sfSprite_create();
    sfSprite_setTexture(stext3, ttext3, 0);
    sfSprite_setPosition(stext3, (sfVector2f) {b, 300});

    sfTexture *ttext3a;
    ttext3a = sfTexture_createFromFile("images/bird2.png", NULL);
    sfSprite *stext3a;
    stext3a = sfSprite_create();
    sfSprite_setTexture(stext3a, ttext3a, 0);
    sfSprite_setPosition(stext3a, (sfVector2f) {b, 300});

    sfTexture *ttext4a;
    ttext4a = sfTexture_createFromFile("images/cactus.png", NULL);
    sfSprite *stext4a;
    stext4a = sfSprite_create();
    sfSprite_setTexture(stext4a, ttext4a, 0);
    sfSprite_setPosition(stext4a, (sfVector2f) {c, 400});


    window = sfRenderWindow_create(video_mode,
                                   "My_runner",
                                   sfDefaultStyle,
                                   NULL);
    sfTime time;
    sfClock *clock = sfClock_create();
    sfRenderWindow_setFramerateLimit(window, 60);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        sfRenderWindow_drawSprite(window, stext1, NULL);
        sfRenderWindow_drawSprite(window, stext1d, NULL);
        sfRenderWindow_drawSprite(window, stext1e, NULL);
        sfRenderWindow_drawSprite(window, stext1f, NULL);
        time = sfClock_getElapsedTime(clock);
        x = x - 10;
        y = y - 4;
        z = z - 1;
        if (c > 1480)
            b = b - 15;
        if (b > 1480)
            c = c - 10;

        sfSprite_setPosition(stext1d, (sfVector2f) {x, 450});
        sfSprite_setPosition(stext1e, (sfVector2f) {y, 0});
        sfSprite_setPosition(stext1f, (sfVector2f) {z, 50});
        sfSprite_setPosition(stext3, (sfVector2f) {b, 320});
        sfSprite_setPosition(stext3a, (sfVector2f) {b, 300});
        sfSprite_setPosition(stext4a, (sfVector2f) {c, 400});
        if (x <= -1724)
            x = 0;
        if (y <= -1724)
            y = 0;
        if (z <= 1)
            z = 1888;
        if (b < 1)
            b = 4000;
        if (c < 1)
            c = 2500;
        if (sfKeyboard_isKeyPressed(sfKeyDown) && bol == 1) {
            if (sfTime_asSeconds(time) < 0.2) {
                sfRenderWindow_drawSprite(window, stext3, NULL);
                sfRenderWindow_drawSprite(window, stext2, NULL);
            }
            if (sfTime_asSeconds(time) > 0.2 && sfTime_asSeconds(time) < 0.4) {
                sfRenderWindow_drawSprite(window, stext3a, NULL);
                sfRenderWindow_drawSprite(window, stext2a, NULL);
            }
            if (sfTime_asSeconds(time) > 0.4 && sfTime_asSeconds(time) < 0.6) {
                sfRenderWindow_drawSprite(window, stext2, NULL);
                sfRenderWindow_drawSprite(window, stext3, NULL);
            }
            if (sfTime_asSeconds(time) > 0.6) {
                sfRenderWindow_drawSprite(window, stext2a, NULL);
                sfRenderWindow_drawSprite(window, stext3a, NULL);
            }
            bol = 3;
        }
        if (b >= 45 && b <= 192 && bol != 3) {
            sfRenderWindow_drawSprite(window, stext1b, NULL);
            return (0);
        }
        if (sfKeyboard_isKeyPressed(sfKeyUp) && bol == 1) {
            sfSprite_setPosition(stext1aa, (sfVector2f) {75, 200});
            sfRenderWindow_drawSprite(window, stext1aa, NULL);
            if (sfTime_asSeconds(time) < 0.2) {
                sfRenderWindow_drawSprite(window, stext3, NULL);
            }
            if (sfTime_asSeconds(time) > 0.2 && sfTime_asSeconds(time) < 0.4) {
                sfRenderWindow_drawSprite(window, stext3a, NULL);
            }
            if (sfTime_asSeconds(time) > 0.4 && sfTime_asSeconds(time) < 0.6) {
                sfRenderWindow_drawSprite(window, stext3, NULL);
            }
            if (sfTime_asSeconds(time) > 0.6) {
                sfRenderWindow_drawSprite(window, stext3a, NULL);
            }
            bol = 2;
        }
        if (c >= 45 && c <= 200 && bol != 2) {
            sfRenderWindow_drawSprite(window, stext1b, NULL);
            return (0);
        }
            sfRenderWindow_drawSprite(window, stext4a, NULL);
        if (sfTime_asSeconds(time) <= 0.2 && bol == 1) {
            sfRenderWindow_drawSprite(window, stext1b, NULL);
            sfRenderWindow_drawSprite(window, stext3, NULL);
        }
        if (sfTime_asSeconds(time) <= 0.5 && sfTime_asSeconds(time) >= 0.2 && bol == 1) {
            sfRenderWindow_drawSprite(window, stext1a, NULL);
            sfRenderWindow_drawSprite(window, stext3a, NULL);
        }
        if (sfTime_asSeconds(time) >= 0.5 && sfTime_asSeconds(time) <= 0.8 && bol == 1) {
            sfRenderWindow_drawSprite(window, stext1c, NULL);
            sfRenderWindow_drawSprite(window, stext3, NULL);

        }
        if (sfTime_asSeconds(time) >= 0.8) {
            sfClock_restart(clock);
        }

        sfRenderWindow_display(window);
        bol = 1;
    }
    sfRenderWindow_destroy(window);
    return (0);
}