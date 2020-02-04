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