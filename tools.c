/*
** EPITECH PROJECT, 2020
** tools.c
** File description:
** calloc string
*/

#include "stdlib.h"
int my_strlen(char const *str);

//Add zero before the string, str and number of zero wanted
char *my_add_char(char *src, int char_added, char character)
{
    int destlen = my_strlen(src) + char_added;
    char *dest = malloc(sizeof(char) * (destlen + 1));
    int i;

    for (i = 0; i < char_added; i += 1)
        dest[i] = character;
    for (int j = 0; src[j] != '\0'; j += 1) {
        dest[i] = src[j];
        i += 1;
    }
    dest[i] = '\0';
    return (dest);
}

//Get length and add zero in numbers if needed
int my_length(char **av)
{
    int len_1 = my_strlen(av[0]);
    int len_2 = my_strlen(av[1]);
    int length = (len_1 > len_2) ? len_1 : len_2;

    return (length);
}

void my_strswap(char **str, char **str_2)
{
    void *swap;

    swap = *str;
    *str = *str_2;
    *str_2 = swap;
}

char *my_add_last_char(char *src, int char_added, char character)
{
    int destlen = my_strlen(src) + char_added;
    char *dest = malloc(sizeof(char) * (destlen + 1));
    int i;

    dest = src;
    for (i = destlen - char_added; i < destlen; i += 1)
        dest[i] = character;
    dest[i] = '\0';
    return (dest);
}
