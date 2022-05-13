/*
** EPITECH PROJECT, 2021
** my_atoi.c
** File description:
** my_atoi
*/

int my_atoi(char *str)
{
    int result = 0;
    int neg = 1;
    int i = 0;

    if (str[i] == '-') {
        neg = -1;
        i++;
    }
    for (; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            break;
        }
        result = result * 10 + str[i] - '0';
    }
    result = result * neg;
    return (result);
}
