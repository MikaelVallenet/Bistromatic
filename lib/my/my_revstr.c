/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** copy string
*/

void my_putchar(char c);

int mikastrlen(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_revstr(char *str)
{
    int length;
    int i = 0;
    int j;
    char switchy;

    length = mikastrlen(str);
    j = length - 1;
    while (i < length/2) {
        switchy = str[i];
        str[i] = str[j];
        str[j] = switchy;
        i++;
        j--;
    }
    return (str);
}
