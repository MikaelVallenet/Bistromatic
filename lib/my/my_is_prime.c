/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** day5
*/

int my_is_prime(int nb)
{
    int prime;
    int i;
    if (nb < 2) {
        return (0);
    }
    i = 2;
    while (i < nb - 1) {
        if (nb % i == 0) {
            return (0);
        }
        else {
            i++;
        }
    }
    return (1);
}
