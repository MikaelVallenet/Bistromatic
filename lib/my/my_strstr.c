/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** copy string
*/

void my_putchar(char c);

int find_proc(int i, char *str, char const *to_find)
{
    int j = 0;

    while (to_find[j] != '\0') {
        if (to_find[j] != str[i]) {
            return (404);
        }
        i++;
        j++;
    }
    return (0);
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int found = 404;

    if (to_find == 0)
        return (0);
    while (str[i] != '\0') {
        if (str[i] == to_find[0]) {
            found = find_proc(i, str, to_find);
        }
        if (found == 0)
            return (str + i);
        i++;
    }
    return (0);
}
