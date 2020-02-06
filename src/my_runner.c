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

void runner_loop(data_t *texture, sprite_t *sprite)
{
    speed_game(sprite);
    sfRenderWindow_setFramerateLimit(texture->window, sprite->speed);
    game_loop(texture, sprite);
    condition(sprite);
    key_down(texture, sprite);
    key_up(texture, sprite);
    move_dino(texture, sprite);
    score_management(texture, sprite);
    lose_condition(texture, sprite);
}

void my_runner(data_t *texture, sprite_t *sprite, sfEvent event)
{
    sound_management(texture);
    player_score_msg(sprite);
    player_score(sprite);
    sfRenderWindow_setFramerateLimit(texture->window, sprite->speed);
    while (sfRenderWindow_isOpen(texture->window)) {
        while (sfRenderWindow_pollEvent(texture->window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(texture->window);
                sfRenderWindow_close(texture->window);
            }
        }
        runner_loop(texture, sprite);
    }
}