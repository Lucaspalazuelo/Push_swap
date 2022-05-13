/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        a = a + 1;
    }
    return (a);
}
