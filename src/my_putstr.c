/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** my_putstr
*/
#include "../include/my.h"

int my_putstr(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        my_putchar(str[a]);
        a = a + 1;
    }
    return (0);
}
