/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** verify if strings contains only lower.
*/

int my_str_islower(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (97 > str[i] || str[i] > 122) {
            return (0);
        }
        i++;
    }
    return (1);
}
