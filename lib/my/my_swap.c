/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** Swap two integers
*/

void my_putchar(char c);

void my_swap(int *a, int *b)
{
    int tempo;

    tempo = *a;
    *a = *b;
    *b = tempo;
}
