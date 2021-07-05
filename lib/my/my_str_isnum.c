/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** verify if strings contains only digits.
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((48 > str[i] || str[i] > 57) && str[i] != '-') {
            return (0);
        }
        i++;
    }
    return (1);
}
