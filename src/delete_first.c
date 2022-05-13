/*
** EPITECH PROJECT, 2021
** delete_first.c
** File description:
** delete_first
*/
#include "../include/my.h"

int delete_first(list_s **element)
{
    list_s *next_element = NULL;
    int ret = -1;

    if (*element == NULL) {
        return (84);
    }
    next_element = (*element)->next;
    ret = (*element)->value;
    free(*element);
    *element = next_element;
    return (0);
}
