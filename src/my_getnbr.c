/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** my_getnbr.c
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

long my_getnbr(char *str)
{
    long i = 0;
    long n = 0;

    if (str[0] == '-' && str[1] != '\0')
        i++;
    while (str[i] != '\0') {
        if ((str[i] < '0' || str[i] > '9'))
            return (84);
        n = n + str[i] - 48;
        n = n * 10;
        i++;
    }
    n /= 10;
    if (str[0] == '-')
        return (-1 * n);
    else
        return (n);
}