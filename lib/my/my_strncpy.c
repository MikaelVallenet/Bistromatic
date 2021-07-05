/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** copy string
*/

void my_putchar(char c);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n) {
        dest[i] = src[i];
        if (src[i] == '\0') {
            break;
        }
        i++;
    }
    while (dest[i] != '\0') {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
