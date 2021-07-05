/*
** EPITECH PROJECT, 2020
** division.c
** File description:
** do division
*/

#include "../include/my.h"
#include <stdlib.h>

char *my_add_last_char(char *src, int char_added, char character);
char *my_nbr_to_str(int nb);

char *division_initialization(char **av, int base)
{
    char *rest = my_alloc_char(sizeof(char) * (my_length(av)) + 1, '\0');
    char *result = my_alloc_char(sizeof(char) * (my_length(av)) + 1, '\0');
    int div = 0;
    int j;

    result[0] = '\0';
    for (int i = 0; av[0][i] != '\0'; i += 1) {
        div = 0;
        rest = my_add_last_char(rest, 1, av[0][i]);
        for (j = 1; div == 0; j += 1)
            div += (my_nbrcmp(my_mul(my_nbr_to_str(j), av[1], base), rest) < 0);
        j -= 2;
        result -= 1;
        result[0] = j + '0';
        rest = my_sub(rest, my_mul(my_nbr_to_str(j), av[1], base), base);
        rest += (rest[0] == '0');
    }
    result = my_revstr(result);
    while (result[0] == '0' && result[1] != '\0')
        result += 1;
    return (result);
}
