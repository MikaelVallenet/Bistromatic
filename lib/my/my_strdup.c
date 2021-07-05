/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** malloc day
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    char *str = NULL;
    int length = my_strlen(src);

    str = malloc(sizeof(char) * (length + 1));
    my_strcpy(str, src);
    str[length] = '\0';
    return (str);
}
