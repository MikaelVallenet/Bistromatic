/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** verify if strings contains only alpha.
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (65 > str[i] || str[i] > 90 && 97 > str[i] || str[i] > 122) {
            return (0);
        }
        i++;
    }
    return (1);
}
