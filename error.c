/*
** EPITECH PROJECT, 2020
** BISTROMATIX
** File description:
** Handle error
*/

#include "./include/my.h"
#include <stdlib.h>

int my_isbase(char chara, int base)
{
    if (chara == '(' || chara == ')')
        return (2);
    if ('0' <= chara && chara <= '0' + base)
        return (1);
    return (0);
}

void para_check(char *str, int base)
{
    if ((*str == '(' && !((my_isbase(*(str - 1), base) == 0 ||
    my_isbase(*(str - 1), base) == 2) &&
    (my_isbase(*(str + 1), base) == 1 ||
    my_isbase(*(str + 1), base) == 2 ||
    *(str + 1) == '-')))) {
        my_putstr_error(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    }
    if ((*str == ')' && !((my_isbase(*(str - 1), base) == 1 ||
    my_isbase(*(str - 1), base) == 2) &&
    (my_isbase(*(str + 1), base) == 0 ||
    my_isbase(*(str + 1), base) == 2)))) {
        my_putstr_error(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    }
}

void sign_error(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] == '+' || str[i] == '*' || str[i] == '-' ||
        str[i] == '/' || str[i] == '%') &&
        (str[i + 1] == '*' || str[i + 1] == '/' || str[i + 1] == '%')) {
            my_putstr_error(SYNTAX_ERROR_MSG);
            exit(EXIT_BASE);
        }
    }
    return;
}

void unique_symbol(char **av, char *buff)
{
    char *str = malloc(my_strlen(av[1]) + my_strlen(av[2]) + 1);
    int k;

    my_strcpy(str, av[1]);
    my_strcat(str, av[2]);
    for (int i = 0; str[i] != '\0'; i += 1) {
        k = -1;
        for (int j = 0; str[j] != '\0'; j += 1)
            k += (str[i] == str[j]);
        if (k > 0) {
            my_putstr_error(SYNTAX_ERROR_MSG);
            exit(EXIT_BASE);
        }
    }
    for (int i = 0; buff[i + 1] != '\0'; i += 1) {
        for (k = 0; str[k] != '\0' && str[k] != buff[i]; k += 1);
        if (my_strlen(str) == k) {
            my_putstr_error(SYNTAX_ERROR_MSG);
            exit(EXIT_BASE);
        }
    }
}

void error(char *str, int base)
{
    int count = 0;

    if (str[0] == '/' || str[0] == '*' || str[0] == '%') {
        my_putstr_error(SYNTAX_ERROR_MSG);
        exit(EXIT_USAGE);
    }
    for (int i = 0; str[i] != '\0'; i += 1) {
        count += (str[i] == '(') - (str[i] == ')');
        if (count < 0) {
            my_putstr_error(SYNTAX_ERROR_MSG);
            exit(EXIT_USAGE);
        }
        if ((str[i] == '(') || (str[i] == ')' && str[i + 1] != '\0'))
            para_check(str + i, base);
    }
    if (count != 0) {
        my_putstr_error(SYNTAX_ERROR_MSG);
        exit(EXIT_USAGE);
    }
}
