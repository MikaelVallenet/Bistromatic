/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** copy string
*/

void my_putchar(char c);

char *my_strlowcase2(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 64 && str[i] < 91)
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}

char up_case(char car)
{
    if (car > 96 && car < 123)
        car = car - 32;
    return (car);
}

char *my_strcapitalize(char *str)
{
    int i = 0;

    my_strlowcase2(str);
    while (str[i] != '\0') {
        if (i == 0 || str[i - 1] < 48 ||
        (str[i - 1] > 57 && str[i - 1] < 65) ||
        (str[i - 1] > 90 && str[i-1] < 97) ||
        str[i - 1] > 122) {
            str[i] = up_case(str[i]);
        }
        i++;
    }
    return (str);
}
