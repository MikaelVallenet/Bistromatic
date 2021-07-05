/*
** EPITECH PROJECT, 2020
** all operations
** File description:
** operations
*/

#include "./include/my.h"
#include <stdlib.h>
char *addition_initialization(char **av);
char *multiplication(char *small_nbr, char *big_nbr, int base);
char *division_initialization(char **av, int base);
char *modulo_initialization(char **av, int base);

char *my_add(char *nbr_1, char *nbr_2, int base)
{
    char **nbrs = malloc(sizeof(char *) * 3);

    nbrs[0] = nbr_1;
    nbrs[1] = nbr_2;
    nbrs[2] = base;
    return (addition_initialization(nbrs));
}

char *my_sub(char *nbr_1, char *nbr_2, int base)
{
    char **nbrs = malloc(sizeof(char *) * 3);

    nbrs[0] = nbr_1;
    nbrs[1] = my_add_char(nbr_2, 1, '-');
    nbrs[2] = base;
    return (addition_initialization(nbrs));
}

char *my_mul(char *nbr_1, char *nbr_2, int base)
{
    int negative = ((nbr_1[0] == '-') + (nbr_2[0] == '-'));
    char *result;

    nbr_1 += (nbr_1[0] == '-');
    nbr_2 += (nbr_2[0] == '-');
    if ((my_nbrcmp(nbr_1, nbr_2)) == 1)
        my_strswap(&nbr_1, &nbr_2);
    result = multiplication(nbr_1, nbr_2, base);
    return (my_add_char(result, (negative == 1), '-'));
}

char *my_div(char *nbr_1, char *nbr_2, int base)
{
    char **nbrs = malloc(sizeof(char *) * 2);
    int negative = ((nbr_1[0] == '-') + (nbr_2[0] == '-'));
    char *result;

    if (nbr_2[0] == '0' && nbr_2[1] == '\0') {
        my_putstr_error(SYNTAX_ERROR_MSG);
        exit(EXIT_USAGE);
    }
    nbrs[0] = nbr_1;
    nbrs[1] = nbr_2;
    nbrs[0] += (nbrs[0][0] == '-');
    nbrs[1] += (nbrs[1][0] == '-');
    result = division_initialization(nbrs, base);
    return (my_add_char(result, (negative == 1), '-'));
}

char *my_mod(char *nbr_1, char *nbr_2, int base)
{
    char **nbrs = malloc(sizeof(char *) * 2);
    int negative = ((nbr_1[0] == '-'));
    char *result;

    if (nbr_2[0] == '0' && nbr_2[1] == '\0') {
        my_putstr_error(SYNTAX_ERROR_MSG);
        exit(EXIT_USAGE);
    }
    nbrs[0] = nbr_1;
    nbrs[1] = nbr_2;
    nbrs[0] += (nbrs[0][0] == '-');
    nbrs[1] += (nbrs[1][0] == '-');
    result = modulo_initialization(nbrs, base);
    return (my_add_char(result, (negative == 1), '-'));
}
