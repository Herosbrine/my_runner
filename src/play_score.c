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
        sprite->score1 = sprite->score1 + 1;
    sfText_setString(sprite->score, my_int_to_char(sprite->score1));
    sfRenderWindow_drawText(texture->window, sprite->score_txt, NULL);
    sfRenderWindow_drawText(texture->window, sprite->score, NULL);
}

void speed_game(sprite_t *sprite)
{
    if (sprite->score1 > sprite->change_score
    && sprite->count2 == sprite->count) {
        sprite->speed = sprite->speed + 5;
        sprite->count++;
        sprite->change_score = sprite->change_score + 150;
        sprite->count2 = sprite->count;
    }
}