/*
** EPITECH PROJECT, 2021
** push_end.c
** File description:
** push_end
*/
#include "../include/my.h"

int push_end(list_s **element_ref, int new_value)
{
    list_s *new_element = malloc(sizeof(list_s));
    list_s *last = *element_ref;

    new_element->value = new_value;
    new_element->next = NULL;
    if (*element_ref == NULL) {
        *element_ref = new_element;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_element;
    return (0);
}
