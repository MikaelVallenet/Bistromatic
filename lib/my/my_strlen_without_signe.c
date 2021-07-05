/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** day4
*/

void my_putchar(char c);

int my_strlen_without_signe(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0' && str[i] != '+' && str[i] != '-') {
        i++;
    }
    return (i);
}
