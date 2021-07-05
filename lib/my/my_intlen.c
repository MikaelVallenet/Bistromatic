/*
** EPITECH PROJECT, 2020
** BISTROMATEK
** File description:
** intlen
*/

int my_intlen(int nb)
{
    int exposant = 10;
    int value = 1;
    int i;

    if (nb < 0)
        nb = -nb;
    for (i = 0; value > 0; i++) {
        value = nb / exposant;
        exposant = exposant * 10;
    }
    return (i);
}
