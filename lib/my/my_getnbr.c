/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT, 2020
** File description:
** day4
*/

int my_start(char const *start)
{
    int i;

    i = 0;
    while (start[i] < 48 || start[i] > 57) {
        if (start[i] == 43 || start[i] == 45) {
            i++;
        } else {
            return (-5);
        }
    }
    return (i);
}

int my_end(char const *end)
{
    int start;

    start = my_start(end);
    if (start == -5) {
        return (-5);
    }
    while (end[start] > 47 && end[start] < 58) {
        start++;
    }
    return (start);
}

int mikasign(char const *str)
{
    int i;
    int sign;

    i = 0;
    sign = 43;
    while (str[i] == 43 || str[i] == 45) {
        if (str[i] == 43 && sign == 45 ||
            str[i] == 45 && sign == 43) {
            sign = 45;
        } else {
            sign = 43;
        }
        i++;
    }
    return (sign);
}

int my_getnbr3(char const *str, int sign, int start, int end)
{
    int sum;
    long long sumlong;

    if (sign == -5)
        return (0);
    sumlong = 0;
    while (start != end) {
        if (sign == 43 && sumlong * 10 + str[start] - 48 <= 2147483647 ||
            sign == 45 && sumlong * 10 + str[start] - 48 <= 2147483648)
            sumlong = sumlong * 10 + (str[start] - 48);
        else {
            sumlong = 0;
            break;
        }
        start++;
    }
    sum = sumlong;
    return (sum);
}

int my_getnbr(char const *str)
{
    int sum;
    int sign;
    int start;
    int end;

    sign = mikasign(str);
    start = my_start(str);
    end = my_end(str);
    sum = my_getnbr3(str, sign, start, end);
    if (sign == 45)
        sum = sum / -1;
    return (sum);
}
