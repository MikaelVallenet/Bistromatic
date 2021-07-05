/*
** EPITECH PROJECT, 2020
** BISTROMATIC
** File description:
** EvalExpr
*/

#include <stdlib.h>
#include "./../include/my.h"
char *factors(char **str_ptr, int base);
char *my_str_is_neg(char *str);

int my_strtol(char *str, char **end_ptr, int base)
{
    int i = 0;

    if ((str[i] < '0' || str[i] > ('0' + base)))
        i++;
    while (str[i] >= '0' && str[i] <= ('0' + base))
        i++;
    (*end_ptr) = str + i;
    return (0);
}

char *number(char **str_ptr, int base)
{
    int i = 0;
    char *number = malloc(my_strlen((*str_ptr)));
    int value = 0;
    char *end_ptr;

    if ((*str_ptr)[0] == '\0')
        return ("0");
    if (((*str_ptr)[i] < '0' || (*str_ptr)[i] > ('0' + base)) &&
        (*str_ptr)[i] != '-' && (*str_ptr)[i] != '+')
        (*str_ptr)++;
    (*str_ptr) = my_str_is_neg(*str_ptr);
    if ((*str_ptr)[i] == '+' || (*str_ptr)[i] == '-')
        i++;
    while ((*str_ptr)[i] >= '0' && (*str_ptr)[i] <= ('0' + base))
        i++;
    my_strncpy(number, (*str_ptr), i);
    my_strtol((*str_ptr), &end_ptr, base);
    (*str_ptr) = end_ptr;
    number += (number[0] == '+');
    return (number);
}

char *summands(char **str_ptr, int base)
{
    char *result = malloc(my_strlen((*str_ptr)) + 1);
    char *nbr1 = malloc(my_strlen((*str_ptr)) + 1);

    while (nbr1[0] != '0' || (*str_ptr)[0] != '\0') {
        my_strcpy(nbr1, factors(str_ptr, base));
        my_strcpy(result, my_add(result, nbr1, base));
        if ((*str_ptr)[0] == ')')
            return (result);
    }
    return (result);
}

char *factors(char **str_ptr, int base)
{
    char *result = my_alloc_char(my_strlen((*str_ptr)) + 1, '\0');
    char *nbr2 = my_alloc_char(my_strlen((*str_ptr)) + 1, '\0');

    my_strcpy(result, number(str_ptr, base));
    while ((*str_ptr)[0] == '*' || (*str_ptr)[0] == '/' ||
        (*str_ptr)[0] == '%') {
        if ((*str_ptr)[0] == '/') {
            my_strcpy(nbr2, number(str_ptr, base));
            result = my_strcpy(result, my_div(result, nbr2, base));
        }
        if ((*str_ptr)[0] == '*') {
            my_strcpy(nbr2, number(str_ptr, base));
            result = my_strcpy(result, my_mul(result, nbr2, base));
        } else if ((*str_ptr)[0] == '%') {
            my_strcpy(nbr2, number(str_ptr, base));
            result = my_strcpy(result, my_mod(result, nbr2, base));
        } else
            nbr2[0] = '0';
    }
    return (result);
}

char *expression(char *str, int base)
{
    char *cpy = my_strdup(str);
    char **str_ptr = &cpy;

    return (summands(str_ptr, base - 1));
}
