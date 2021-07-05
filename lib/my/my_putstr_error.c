/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** day4
*/

void my_putchar_error(char c);

int my_putstr_error(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        my_putchar_error(str[i]);
        i++;
    }
    return (0);
}
