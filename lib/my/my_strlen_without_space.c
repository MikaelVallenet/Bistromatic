/*
** EPITECH PROJECT, 2020
** Strlen without space
** File description:
** length of a string without space
*/

void my_putchar(char c);

int my_strlen_without_space(char const *str)
{
    int i;
    int length = 0;

    i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            length++;
        i++;
    }
    return (length);
}
