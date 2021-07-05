/*
** EPITECH PROJECT, 2020
** my_is_positve
** File description:
** if positive, return 1, else -1
*/

int my_is_pos(int value)
{
    if (value == 0) {
        return (0);
    }
    else if (value < 0) {
        return (1);
    }
    else {
        return (-1);
    }
}
