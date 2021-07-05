/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** copy string
*/

void my_putchar(char c);

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
