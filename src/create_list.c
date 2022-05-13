/*
** EPITECH PROJECT, 2021
** create_list.c
** File description:
** create_list
*/
#include "../include/my.h"

int create_list(list_s *element, int ac, char **av)
{
    if (element == NULL) {
        return (84);
    }
    element->value = my_atoi(av[1]);
    element->next = NULL;
    for (int i = 2; i < ac; i++) {
        push_end(&element, my_atoi(av[i]));
    }
    return (0);
}
