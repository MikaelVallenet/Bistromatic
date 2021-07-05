/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** copy string
*/

#include "my.h"
void my_putchar(char c);
int detect_string_add(char s1, char s2)
{
    if (s1 > s2)
        return (1);
    if (s1 < s2)
        return (-1);
    return (404);
}

int detect_length_add(char const *s1, char const *s2, int i, int k)
{
    if (my_strlen(s1) - i > my_strlen(s2) - k)
        return (1);
    if (my_strlen(s2) - k > my_strlen(s1) - i)
        return (-1);
    else
        return (0);
}

int my_strcmp_add(char const *s1, char const *s2)
{
    int j = 0;
    int k = 0;
    int value;

    if (s1[0] == '-')
        j = 1;
    if (s2[0] == '-')
        k = 1;
    if (detect_length_add(s1, s2, j, k) != 0)
        return (detect_length_add(s1, s2, j, k));
    while (s1[j] != '\0' || s2[k] != '\0') {
        if (s1[j] != s2[k]) {
            value = detect_string_add(s1[j], s2[k]);
            return (value);
        }
        j++;
        k++;
    }
    return (0);
}
