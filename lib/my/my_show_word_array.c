/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** concat params
*/

#include <stdlib.h>

int count_total_words(char * const *tab)
{
    int i = 0;

    while (tab[i] != 0) {
        i++;
    }
    return (i);
}

int count_total_length(char * const *tab)
{
    int i = 0;
    int length = 0;

    while (tab[i] != 0) {
        length = length + my_strlen(tab[i]);
        i++;
    }
    return (length);
}

int my_show_word_array(char * const *tab)
{
    int length = 0;
    char *str;
    int i = 0;
    int words = count_total_words(tab);

    length = count_total_length(tab);
    str = malloc(sizeof(char) * (length + words));
    while (tab[i] != 0) {
        my_strcat(str, tab[i]);
        i++;
        my_strcat(str, "\n");
    }
    my_putstr(str);
    return (0);
}
