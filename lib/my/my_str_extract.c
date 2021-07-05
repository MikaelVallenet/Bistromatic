/*
** EPITECH PROJECT, 2020
** EvalExpr
** File description:
** str_extract
*/

char *my_str_extract(char *dest, char *src, int borne_inf, int borne_sup)
{
    int i = 0;

    while (borne_inf <= borne_sup) {
        dest[i] = src[borne_inf];
        borne_inf++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
