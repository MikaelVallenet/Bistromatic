/*
** EPITECH PROJECT, 2020
** base.c
** File description:
** calcule base
*/

#include "include/my.h"

char *traductor_sign(char *function, char *base, int sens)
{
    char *str = {"()+-*/%"};

    for (int j = 0; base[j] != '\0'; j += 1) {
        if (base[j] == function[0] && sens == 0)
            function[0] = str[j];
        if (function[0] == str[j] && sens == 1)
            function[0] = base[j];
    }
}

char *traductor(char *function, char **base, int sens)
{
    for (int j = 0; base[1][j] != '\0'; j += 1) {
        if (base[1][j] == function[0] && sens == 0) {
            function[0] = '0' + j;
            break;
        } else if (function[0] == j + '0' && sens == 1) {
            function[0] = base[1][j];
            break;
        } else
            traductor_sign(function, base[2], sens);
    }
    if (my_strlen(function) == 1)
        return (function);
    else
        return (traductor(function + 1, base, sens));
}
