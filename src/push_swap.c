/*
** EPITECH PROJECT, 2021
** pushswap.c
** File description:
** pushswap
*/
#include "../include/my.h"

int main(int ac, char **av)
{
    list_s *l_a = NULL;
    list_s *l_b = NULL;

    l_a = malloc(sizeof(list_s));
    if (ac < 2)
        return (84);
    create_list(l_a, ac, av);
    algo_list(&l_a, &l_b);
    return (0);
}
