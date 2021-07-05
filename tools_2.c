/*
** EPITECH PROJECT, 2020
** tools_2
** File description:
** tools_2
*/

#include <stdlib.h>
#include "include/my.h"

int my_compute_power_rec(int nb, int p);
char *my_add_last_char(char *src, int char_added, char character);

char *my_nbr_to_str(int nb)
{
    char *result = malloc(sizeof(char) * 12);
    int i = 0;
    int negative = 0;

    if (nb < 0) {
        negative += 1;
        nb *= -1;
    }
    if (nb == 0) {
        result[0] = '0';
        return (result);
    }
    for (; nb > 0; i += 1) {
        result[i] = (nb % 10) + '0';
        nb = nb / 10;
    }
    for (int j = 0; negative == 1 && j < 1; i += 1, j += 1)
        result[i] = '-';
    result[i] = '\0';
    my_revstr(result);
    return (result);
}
