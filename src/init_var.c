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

void init_var4(data_t *texture, sprite_t *sprite)
{
    sprite->count2 = 1;
    sprite->count = 1;
    sprite->change_score = 150;
    sprite->score1 = 0;
    sprite->speed = 60;
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
    sfSprite_setPosition(sprite->stext1c, (sfVector2f) {75, 320});
    texture->ttext1d = sfTexture_createFromFile("images/ground.png", NULL);
    sprite->stext1d = sfSprite_create();
    sfSprite_setTexture(sprite->stext1d, texture->ttext1d, 0);
    sfSprite_setPosition(sprite->stext1d, (sfVector2f) {sprite->x, 450});
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
    sfSprite_setPosition(sprite->stext1a, (sfVector2f) {75, 320});
    texture->ttext1aa = sfTexture_createFromFile("images/sprite.png", NULL);
    sprite->stext1aa = sfSprite_create();
    sfSprite_setTexture(sprite->stext1aa, texture->ttext1aa, 0);
    sfSprite_setPosition(sprite->stext1aa, (sfVector2f) {75, 320});
    texture->ttext1b = sfTexture_createFromFile("images/sprite2.png", NULL);
    sprite->stext1b = sfSprite_create();
    sfSprite_setTexture(sprite->stext1b, texture->ttext1b, 0);
    sfSprite_setPosition(sprite->stext1b, (sfVector2f) {75, 320});
    init_var2(texture, sprite);
    init_var3(texture, sprite);
    init_var4(texture, sprite);
}