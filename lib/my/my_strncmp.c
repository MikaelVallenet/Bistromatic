/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** copy string
*/

void my_putchar(char c);

int detect_string2(char s1, char s2)
{
    if (s1 > s2)
        return (1);
    if (s1 < s2)
        return (-1);
    return (404);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int j = 0;
    int value;

    while (j < n) {
        if (s1[j] != s2[j]) {
            value = detect_string2(s1[j], s2[j]);
            return (value);
        }
        j++;
    }
    return (0);
}
