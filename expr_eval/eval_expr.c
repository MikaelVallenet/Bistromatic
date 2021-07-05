/*
** EPITECH PROJECT, 2020
** BISTROMATIC
** File description:
** EvalExpr
*/

#include <stdlib.h>
#include "./../include/my.h"
int my_strtol(char *str, char **end_ptr);
void traductor(char *function, char **base, int sens);

char *my_str_is_neg(char *str)
{
    int i;

    for (i = 0; str[i] == '-' || str[i] == '+'; i++);
    if (my_is_pos_getnbr(str) == -1) {
        str = str + (i - 1);
        str[0] = '-';
    } else
        str = str + i;
    return (str);
}

char *eval_expr(char const *str, char **av)
{
    char *src = malloc(my_strlen(str)+1);
    char *nb_str = malloc(my_strlen(str) + 1);
    int j = 0;

    my_strcpy(src, str);
    traductor(src, av, 0);
    error(src, my_strlen(av[1]) - 1);
    for (int i = 0; src[i] != '\0'; i++)
        if (src[i] == ')') {
            j = i;
            for (; src[i] != '('; i--);
            my_strcpy(nb_str, expression(my_str_is_neg(src + i + 1),
            my_strlen(av[1])));
            my_strcat(nb_str, src + j + 1);
            my_strncpy(src, src, i);
            my_strcat(src, nb_str);
            i = 0;
        }
    src = expression(my_str_is_neg(src), my_strlen(av[1]));
    traductor(src, av, 1);
    return (src);
}
