/*
** EPITECH PROJECT, 2020
** BISTROMATIC
** File description:
** Multiplication.V2
*/

#include <stdlib.h>
#include "./../include/my.h"

char *multiplication(char *small_nbr, char *big_nbr, int base)
{
    char *result = my_alloc_char(sizeof(char) *
    (my_strlen(big_nbr) * 2 + 2), '\0');
    char *t = my_alloc_char(sizeof(char) * (my_strlen(big_nbr) * 2 + 2), '\0');

    my_revstr(small_nbr);
    for (int i = 0; i < my_strlen(small_nbr); i++) {
        my_strcpy(t, add_zero(light_multiplication(small_nbr[i],
        big_nbr, base), i));
        result = my_add(result, t, base);
    }
    my_revstr(small_nbr);
    return (result);
}
