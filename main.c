/*
** EPITECH PROJECT, 2020
** Bistromatic
** File description:
** main
*/

#include "./include/my.h"
#include <stdlib.h>
#include <unistd.h>

void sign_error(char *str);
void unique_symbol(char **av, char *buff);
int usage(void);
char *eval_expr(char const *str, char **av);

int main(int ac, char **av)
{
    char buff[my_getnbr(av[3]) + 1];
    int offset = 0;
    int len;

    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        return (usage());
    if (ac == 4 && my_strlen(av[2]) == 7) {
        while ((len = read(0, buff + offset, my_getnbr(av[3]) - offset)) > 0)
            offset = offset + len;
        buff[offset] = '\0';
        if (len < 0) {
            my_putstr_error(SYNTAX_ERROR_MSG);
            return (EXIT_READ);
        }
        unique_symbol(av, buff);
        sign_error(buff);
        my_putstr(eval_expr(buff, av));
        return (0);
    }
    my_putstr_error(SYNTAX_ERROR_MSG);
    return (EXIT_BASE);
}
