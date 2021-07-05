/*
** EPITECH PROJECT, 2020
** my_nbrcmp.c
** File description:
** compare number
*/

int my_is_pos(int value);
int my_strlen(char const *str);

int my_nbrcmp(char const *s1, char const *s2)
{
    int i;
    int s1_len;
    int s2_len;

    if (*s1 == '-')
        s1 += 1;
    if (*s2 == '-')
        s2 += 1;
    s1_len = my_strlen(s1);
    s2_len = my_strlen(s2);
    if (s1_len > s2_len)
        return (-1);
    if (s1_len < s2_len)
        return (1);
    for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i += 1);
    return (my_is_pos(s1[i] - s2[i]));
}
