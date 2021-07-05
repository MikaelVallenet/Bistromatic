/*
** EPITECH PROJECT, 2020
** BISTROMATIC
** File description:
** str_swap
*/

void my_strswap(char **str, char **str_2)
{
    void *swap;

    swap = *str;
    *str = *str_2;
    *str_2 = swap;
}
