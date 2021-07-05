/*
** EPITECH PROJECT, 2020
** my_alloc_char.c
** File description:
** alloc char
*/

#include <stdlib.h>

char *my_alloc_char(int length, char char_wanted)
{
    char *dest = malloc(sizeof(char) * (length + 1));

    for (int i = 0; i < length; i += 1)
        dest[i] = char_wanted;
    dest[length] = '\0';
    return (dest);
}
