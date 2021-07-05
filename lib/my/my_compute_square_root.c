/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** day5
*/

int square_rooting(int nb, int racine, int carre, int find)
{
    while (racine <= nb/2 && find != 1) {
        carre = racine * racine;
        if (carre == nb) {
            find = 1;
        } else {
            racine++;
        }
    }
    if (find == 1) {
        return (racine);
    } else {
        return (0);
    }
}

int my_compute_square_root(int nb)
{
    int racine;
    int find;
    int carre;

    racine = 1;
    find = 0;
    carre= 0;
    if (nb < 1) {
        return (0);
    } else if (nb == 1) {
        return (1);
    }
    racine = square_rooting(nb, racine, carre, find);
    return (racine);
}
