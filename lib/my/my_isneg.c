/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** display negativ or positiv
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
    return (0);
}
