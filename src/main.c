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

void init_var4(data_t *texture, sprite_t *sprite)
{
    texture->ttext4a = sfTexture_createFromFile("images/cactus.png", NULL);
    sprite->stext4a = sfSprite_create();
    sfSprite_setTexture(sprite->stext4a, texture->ttext4a, 0);
    sfSprite_setPosition(sprite->stext4a, (sfVector2f) {sprite->c, 400});
    texture->ttext10 = sfTexture_createFromFile("images/game_over.png", NULL);
    sprite->stext10 = sfSprite_create();
    sfSprite_setTexture(sprite->stext10, texture->ttext10, 0);
    sfSprite_setPosition(sprite->stext10, (sfVector2f) {500, 302});
    texture->ttext11 = sfTexture_createFromFile("images/restart.png", NULL);
    sprite->stext11 = sfSprite_create();
    sfSprite_setTexture(sprite->stext11, texture->ttext11, 0);
    sfSprite_setPosition(sprite->stext11, (sfVector2f) {650, 360});
}

void init_var3(data_t *texture, sprite_t *sprite)
{
    texture->ttext1e = sfTexture_createFromFile("images/sky.png", NULL);
    sprite->stext1e = sfSprite_create();
    sfSprite_setTexture(sprite->stext1e, texture->ttext1e, 0);
    sfSprite_setPosition(sprite->stext1e, (sfVector2f) {sprite->y, 0});
    texture->ttext1f = sfTexture_createFromFile("images/moon.png", NULL);
    sprite->stext1f = sfSprite_create();
    sfSprite_setTexture(sprite->stext1f, texture->ttext1f, 0);
    sfSprite_setPosition(sprite->stext1f, (sfVector2f) {sprite->z, 50});
    texture->ttext3 = sfTexture_createFromFile("images/bird.png", NULL);
    sprite->stext3 = sfSprite_create();
    sfSprite_setTexture(sprite->stext3, texture->ttext3, 0);
    sfSprite_setPosition(sprite->stext3, (sfVector2f) {sprite->b, 300});
    texture->ttext3a = sfTexture_createFromFile("images/bird2.png", NULL);
    sprite->stext3a = sfSprite_create();
    sfSprite_setTexture(sprite->stext3a, texture->ttext3a, 0);
    sfSprite_setPosition(sprite->stext3a, (sfVector2f) {sprite->b, 300});
}

void init_var2(data_t *texture, sprite_t *sprite)
{
    texture->ttext1c = sfTexture_createFromFile("images/sprite3.png", NULL);
    sprite->stext1c = sfSprite_create();
    sfSprite_setTexture(sprite->stext1c, texture->ttext1c, 0);
    sfSprite_setPosition(sprite->stext1c, (sfVector2f) {75,320});
    texture->ttext1d = sfTexture_createFromFile("images/ground.png", NULL);
    sprite->stext1d = sfSprite_create();
    sfSprite_setTexture(sprite->stext1d, texture->ttext1d, 0);
    sfSprite_setPosition(sprite->stext1d, (sfVector2f) {sprite->x,450});
    texture->ttext2 = sfTexture_createFromFile("images/down.png", NULL);
    sprite->stext2 = sfSprite_create();
    sfSprite_setTexture(sprite->stext2, texture->ttext2, 0);
    sfSprite_setPosition(sprite->stext2, (sfVector2f) {75, 420});
    texture->ttext2a = sfTexture_createFromFile("images/down2.png", NULL);
    sprite->stext2a = sfSprite_create();
    sfSprite_setTexture(sprite->stext2a, texture->ttext2a, 0);
    sfSprite_setPosition(sprite->stext2a, (sfVector2f) {75, 420});
}

void init_var(data_t *texture, sprite_t *sprite)
{
    texture->ttext1 = sfTexture_createFromFile("images/Background.png", NULL);
    sprite->stext1 = sfSprite_create();
    sfSprite_setTexture(sprite->stext1, texture->ttext1, 0);
    texture->ttext1a = sfTexture_createFromFile("images/sprite.png", NULL);
    sprite->stext1a = sfSprite_create();
    sfSprite_setTexture(sprite->stext1a, texture->ttext1a, 0);
    sfSprite_setPosition(sprite->stext1a, (sfVector2f) {75,320});
    texture->ttext1aa = sfTexture_createFromFile("images/sprite.png", NULL);
    sprite->stext1aa = sfSprite_create();
    sfSprite_setTexture(sprite->stext1aa, texture->ttext1aa, 0);
    sfSprite_setPosition(sprite->stext1aa, (sfVector2f) {75,320});
    texture->ttext1b = sfTexture_createFromFile("images/sprite2.png", NULL);
    sprite->stext1b = sfSprite_create();
    sfSprite_setTexture(sprite->stext1b, texture->ttext1b, 0);
    sfSprite_setPosition(sprite->stext1b, (sfVector2f) {75,320});
    init_var2(texture, sprite);
    init_var3(texture, sprite);
    init_var4(texture, sprite);
}

void lose_condition(data_t *texture, sprite_t *sprite)
{
    if (sfTime_asSeconds(texture->time) >= 0.8)
        sfClock_restart(texture->clock);
    if (sprite->bol == 5) {
        sfRenderWindow_drawSprite(texture->window, sprite->stext10, NULL);
        sfRenderWindow_drawSprite(texture->window, sprite->stext11, NULL);
        sfRenderWindow_setFramerateLimit(texture->window, 60);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            destroy_item(texture, sprite);
            main();
        }
    }
    sfRenderWindow_display(texture->window);
    if (sprite->bol != 5)
        sprite->bol = 1;
}

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

void key_up(data_t *texture, sprite_t *sprite)
{
    if (sprite->b >= 45 && sprite->b <= 192
    && sprite->bol != 3 && sprite->bol != 5) {
        sfRenderWindow_drawSprite(texture->window, sprite->stext1b, NULL);
        sprite->bol = 5;
    }
    if (sfKeyboard_isKeyPressed(sfKeyUp) && sprite->bol == 1) {
        sfSprite_setPosition(sprite->stext1aa, (sfVector2f) {75, 200});
        sfRenderWindow_drawSprite(texture->window, sprite->stext1aa, NULL);
        if (sfTime_asSeconds(texture->time) < 0.2)
            sfRenderWindow_drawSprite(texture->window, sprite->stext3, NULL);
        if (sfTime_asSeconds(texture->time) > 0.2
        && sfTime_asSeconds(texture->time) < 0.4)
            sfRenderWindow_drawSprite(texture->window, sprite->stext3a, NULL);
        if (sfTime_asSeconds(texture->time) > 0.4
        && sfTime_asSeconds(texture->time) < 0.6)
            sfRenderWindow_drawSprite(texture->window, sprite->stext3, NULL);
        if (sfTime_asSeconds(texture->time) > 0.6)
            sfRenderWindow_drawSprite(texture->window, sprite->stext3a, NULL);
        sprite->bol = 2;
    }
}

void key_down(data_t *texture, sprite_t *sprite)
{
    if (sfKeyboard_isKeyPressed(sfKeyDown) && sprite->bol == 1) {
        if (sfTime_asSeconds(texture->time) < 0.2) {
            sfRenderWindow_drawSprite(texture->window, sprite->stext3, NULL);
            sfRenderWindow_drawSprite(texture->window, sprite->stext2, NULL);
        }
        if (sfTime_asSeconds(texture->time) > 0.2
        && sfTime_asSeconds(texture->time) < 0.4) {
            sfRenderWindow_drawSprite(texture->window, sprite->stext3a, NULL);
            sfRenderWindow_drawSprite(texture->window, sprite->stext2a, NULL);
        }
        if (sfTime_asSeconds(texture->time) > 0.4
        && sfTime_asSeconds(texture->time) < 0.6) {
            sfRenderWindow_drawSprite(texture->window, sprite->stext2, NULL);
            sfRenderWindow_drawSprite(texture->window, sprite->stext3, NULL);
        }
        if (sfTime_asSeconds(texture->time) > 0.6) {
            sfRenderWindow_drawSprite(texture->window, sprite->stext2a, NULL);
            sfRenderWindow_drawSprite(texture->window, sprite->stext3a, NULL);
        }
        sprite->bol = 3;
    }
}

void condition(sprite_t *sprite)
{
    if (sprite->x <= -1724)
        sprite->x = 0;
    if (sprite->y <= -1724)
        sprite->y = 0;
    if (sprite->z <= 1)
        sprite->z = 1888;
    if (sprite->b < 1)
        sprite->b = 4000;
    if (sprite->c < 1)
        sprite->c = 2500;
}

void game_loop(data_t *texture, sprite_t *sprite)
{
    sfRenderWindow_drawSprite(texture->window, sprite->stext1, NULL);
    sfRenderWindow_drawSprite(texture->window, sprite->stext1d, NULL);
    sfRenderWindow_drawSprite(texture->window, sprite->stext1e, NULL);
    sfRenderWindow_drawSprite(texture->window, sprite->stext1f, NULL);
    texture->time = sfClock_getElapsedTime(texture->clock);
    sprite->x = sprite->x - 10;
    sprite->y = sprite->y - 4;
    sprite->z = sprite->z - 1;
    if (sprite->c > 1480)
        sprite->b = sprite->b - 15;
    if (sprite->b > 1480)
        sprite->c = sprite->c - 10;
    sfSprite_setPosition(sprite->stext1d, (sfVector2f) {sprite->x, 450});
    sfSprite_setPosition(sprite->stext1e, (sfVector2f) {sprite->y, 0});
    sfSprite_setPosition(sprite->stext1f, (sfVector2f) {sprite->z, 50});
    sfSprite_setPosition(sprite->stext3, (sfVector2f) {sprite->b, 320});
    sfSprite_setPosition(sprite->stext3a, (sfVector2f) {sprite->b, 300});
    sfSprite_setPosition(sprite->stext4a, (sfVector2f) {sprite->c, 400});
}

void player_score_msg(sprite_t *sprite)
{
    sprite->font = sfFont_createFromFile("images/Roboto-BlackItalic.ttf");
    sprite->score = sfText_create();
    sfText_setFont(sprite->score, sprite->font);
    sfText_setString(sprite->score, my_int_to_char(sprite->score1));
    sfText_setColor(sprite->score, (sfColor) {0, 0, 0, 255});
    sfText_setCharacterSize(sprite->score, 40);
    sfText_setPosition(sprite->score, (sfVector2f) {1280, 0});
}

void player_score(sprite_t *sprite)
{
    sprite->font = sfFont_createFromFile("images/Roboto-BlackItalic.ttf");
    sprite->score_txt = sfText_create();
    sfText_setFont(sprite->score_txt, sprite->font);
    sfText_setString(sprite->score_txt, "SCORE :");
    sfText_setColor(sprite->score_txt, (sfColor) {0, 0, 0, 255});
    sfText_setCharacterSize(sprite->score_txt, 40);
    sfText_setPosition(sprite->score_txt, (sfVector2f) {1100, 0});
}

void score_management(data_t *texture, sprite_t *sprite)
{
    if (sprite->bol != 5)
        sprite->score1++;
    sfText_setString(sprite->score, my_int_to_char(sprite->score1));
    sfRenderWindow_drawText(texture->window, sprite->score_txt, NULL);
    sfRenderWindow_drawText(texture->window, sprite->score, NULL);
}

void my_runner(data_t *texture, sprite_t *sprite, sfEvent event)
{
    sprite->score1 = 0;
    sprite->speed = 60;
    int haha = 1;
    int count = 1;
    int change_score = 150;
    texture->sbang = sfSoundBuffer_createFromFile("sound/dinosaur.ogg");
    texture->bang = sfSound_create();
    sfSound_setBuffer(texture->bang, texture->sbang);
    sfSound_play(texture->bang);
    player_score_msg(sprite);
    player_score(sprite);
    sfRenderWindow_setFramerateLimit(texture->window, sprite->speed);
    while (sfRenderWindow_isOpen(texture->window)) {
        while (sfRenderWindow_pollEvent(texture->window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(texture->window);
            }
        }
        if (sprite->score1 > change_score && haha == count) {
            sprite->speed = sprite->speed + 5;
            count++;
            change_score = change_score + 150;
            haha = count;
        }
        sfRenderWindow_setFramerateLimit(texture->window, sprite->speed);
        game_loop(texture, sprite);
        condition(sprite);
        key_down(texture, sprite);
        key_up(texture, sprite);
        move_dino(texture, sprite);
        score_management(texture, sprite);
        lose_condition(texture, sprite);
    }
}

void make_screen(data_t *texture, sprite_t *sprite)
{
    texture->window = NULL;
    sfVideoMode video_mode;
    sfEvent event;
    video_mode.height = HEIGHT;
    video_mode.width = WIDTH;
    video_mode.bitsPerPixel = 32;
    sprite->x = 0;
    sprite->y = 0;
    sprite->z = 1888;
    sprite->bol = 1;
    sprite->b = 4000;
    sprite->c = 2500;
    init_var(texture, sprite);
    texture->window = sfRenderWindow_create(video_mode,
                                   "My_runner",
                                   sfDefaultStyle,
                                   NULL);
    texture->clock = sfClock_create();
    my_runner(texture, sprite, event);
}

int main()
{
    data_t texture;
    sprite_t sprite;
    make_screen(&texture, &sprite);
}