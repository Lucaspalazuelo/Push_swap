/*
** EPITECH PROJECT, 2021
** sorting_list.c
** File description:
** sorting_list
*/
#include "../include/my.h"

bool sorting_list(list_s *element)
{
    while (element->next != NULL) {
        if (element->value > element->next->value)
            return (false);
        element = element->next;
    }
    return (true);
}
