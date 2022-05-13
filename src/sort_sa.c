/*
** EPITECH PROJECT, 2021
** sort_sa.c
** File description:
** sort_sa
*/
#include "../include/my.h"

int sort_sa(list_s *element)
{
    int temp;

    temp = element->next->value;
    element->next->value = element->value;
    element->value = temp;
    my_printf("sa");
    return (0);
}
