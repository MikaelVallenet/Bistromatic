/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** day5
*/

void my_putchar(char c);

int my_is_prime2(int nb)
{
    int prime;
    int i;

    i = 2;
    while (i < nb - 1) {
        if (nb % i == 0) {
            return (0);
        }
        else {
            i++;
        }
    }
    return (nb);
}

int my_find_prime_sup(int nb)
{
    if (nb < 2) {
        return (2);
    }
    while (nb > 1) {
        if (my_is_prime2(nb) == nb) {
            return (nb);
        }
        else {
            nb++;
        }
    }
    return (1);
}
