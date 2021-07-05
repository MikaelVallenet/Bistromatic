/*
** EPITECH PROJECT, 2020
** operation.c
** File description:
** do adition / main place
*/

#include "./../include/my.h"
#include <stdlib.h>
char *my_add_char(char *src, int char_added, char character);
int my_length(char **av);
void my_strswap(char **str, char **str_2);

void addition_operation(char **result, char **av, int length, int negative)
{
    int j = 0;
    int base = av[2];

    for (int i = length; i > 0; i -= 1) {
        result[0][j] += av[0][i - 1] + (av[1][i - 1] - '0') *
        (1 - (2 * (negative == 1)));
        if (result[0][j] > ('0' + base)) {
            result[0][j] -= base + 1;
            result[0][j + 1] += 1;
        }
        if (result[0][j] < '0') {
            result[0][j] += base + 1;
            result[0][j + 1] -= 1;
        }
        j += 1;
    }
    my_revstr(*result);
    for (; **result == '0';)
        *result += 1;
}

int addition_negative(char **av, int negative, int length_max)
{
    int is_negative = 0;

    if (my_nbrcmp(av[0], av[1]) == 1 && negative == 1)
        my_strswap(&av[0], &av[1]);
    if (av[0][0] == '-')
        is_negative = 1;
    if (negative > 0) {
        av[0] += (av[0][0] == '-');
        av[1] += (av[1][0] == '-');
        length_max = my_length(av) + 1;
    }
    return (is_negative);
}

char *addition_initialization(char **av)
{
    int negative = ((av[0][0] == '-') + (av[1][0] == '-'));
    int length_max = my_length(av) + 1;
    char *result = malloc(sizeof(char) * (length_max + 3));
    int is_negative = addition_negative(av, negative, length_max);

    result = my_alloc_char(length_max + 1, 0);
    av[0] = my_add_char(av[0], length_max - my_strlen(av[0]), '0');
    av[1] = my_add_char(av[1], length_max - my_strlen(av[1]), '0');
    addition_operation(&result, av, length_max, negative);
    if (result[0] == 0)
        result[0] += '0';
    return (my_add_char(result, is_negative, '-'));
}
