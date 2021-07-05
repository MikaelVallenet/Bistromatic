/*
** EPITECH PROJECT, 2020
** help.c
** File description:
** help2
*/

#include <unistd.h>
#include <stdlib.h>

int usage(void)
{
    write(1, "USAGE\n", 7);
    write(1, "\n", 2);
    write(1, "./calc base operators size_read\n", 33);
    write(1, "\n", 2);
    write(1, "DESCRIPTION\n", 13);
    write(1, "- base: all the symbols of the base\n", 37);
    write(1, "- operators: the symbols for \
the parentheses and the 5 operators\n", 66);
    write(1, "- size_read: number of characters to be read\n", 46);
    return (0);
}
