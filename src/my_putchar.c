/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** my_putchar.c
*/

#include <stdlib.h>
#include <SFML/Graphics/RenderWindow.h>
#include <stdio.h>
#include <unistd.h>
#include "struct.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}