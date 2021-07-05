/*
** EPITECH PROJECT, 2020
** BISTROMATIC
** File description:
** Multiplication
*/

#include "./../include/my.h"
#include <stdlib.h>
//Function that add zero for the multiplication.
char *add_zero(char *str, int nbr_zero)
{
    int length = my_strlen(str) + nbr_zero;
    int full_zero = 0;
    char *string = malloc(my_strlen(str) * 2 + nbr_zero);

    my_strcpy(string, str);
    for (int i = 0; i < length; i++) {
        if (i == my_strlen(str))
            full_zero = 1;
        if (full_zero == 1) {
            string[i] = '0';
            string[i + 1] = '\0';
        }
    }
    return (string);
}

char *define_reach(int i, char digit)
{
    char *nbr_to_reach = malloc(i + 2);
    int j;

    nbr_to_reach[0] = '0';
    for (j = 0; j < i; j++) {
        nbr_to_reach[j] = '0';
        if (j + 1 >= i)
            nbr_to_reach[j] = digit;
    }
    nbr_to_reach[j] = '\0';
    my_revstr(nbr_to_reach);
    return (nbr_to_reach);
}

char *light_multiplication(char small_nbr, char *big_nbr, int base)
{
    char *mul_pos;
    char *result = my_alloc_char(sizeof(char) * my_strlen(big_nbr) * 2, '\0');

    if (small_nbr == '0')
        return ("0");
    mul_pos = malloc(2);
    mul_pos[0] = '0';
    mul_pos[1] = '\0';
    while (my_strcmp(mul_pos, define_reach(1, small_nbr)) != 0) {
        my_strcpy(result, my_add(result, big_nbr, base));
        my_strcpy(mul_pos, my_add(mul_pos, "1", base));
    }
    free(mul_pos);
    return (result);
}
