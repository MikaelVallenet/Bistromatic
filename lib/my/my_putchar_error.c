/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** putchar
*/

#include <unistd.h>

void my_putchar_error(char c)
{
    write(2, &c, 1);
}
