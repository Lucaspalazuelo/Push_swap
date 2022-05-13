/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** my_printf
*/
#include "../include/my.h"

int my_printf(const char *str, ...)
{
    va_list ap;

    va_start(ap, str);
    flags(str, ap);
    va_end(ap);
    return (0);
}

void flags(const char *str, va_list ap)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%' && str[i + 1] == '%') {
            my_putchar('%');
            if (str[i + 2] == '%')
                i++;
        }
        if (str[i] == '%' && str[i + 1] == 'i' || str[i] == '%'
        && str[i + 1] == 'd')
            my_put_nbr(va_arg(ap, int));
        if (str[i] == '%' && str[i + 1] == 's')
            my_putstr(va_arg(ap, char *));
        if (str[i] == '%' && str[i + 1] == 'c')
            my_putchar(va_arg(ap, int));
        if (str[i] == '%' && check_flags(str[i + 1]) == 1)
            continue;
        if (check_flags(str[i]) == 1 && str[i - 1] == '%')
            continue;
        my_putchar(str[i]);
    }
}

int check_flags(char c)
{
    if (c == 's' || c == 'c' || c == 'i'
    || c == 'd' || c == 'u' || c == 'b'
    || c == 'o' || c == 'x' || c == 'X'
    || c == 'S' || c == '%')
        return (1);
    else
        return (0);
}
