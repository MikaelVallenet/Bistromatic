/*
** EPITECH PROJECT, 2020
** my_is_pos_getnbr.c
** File description:
** get if a number is positive or not in a long string
*/

int my_is_pos_getnbr(char const *str)
{
    int minus = 0;

    for (int i = 0; str[i] == '-' || str[i] == '+'; i += 1)
        minus += (str[i] == '-');
    if (minus % 2 == 0)
        return (1);
    return (-1);
}
