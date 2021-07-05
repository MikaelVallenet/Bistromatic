/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** verify if strings contains only printable characs.
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 32) {
            return (0);
        }
        i++;
    }
    return (1);
}
