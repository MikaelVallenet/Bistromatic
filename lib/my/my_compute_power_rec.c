/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** day5
*/

int my_compute_power_rec(int nb, int p)
{
    int result;

    result = nb;
    if (p < 0) {
        return (0);
    }
    else if (p == 0) {
        return (1);
    }
    else {
        result = my_compute_power_rec(nb, p-1) * nb;
        return (result);
    }
}
