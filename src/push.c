/*
** EPITECH PROJECT, 2021
** push.c
** File description:
** push
*/
#include "../include/my.h"

void push(list_s **element, int new_value)
{
    list_s* new_element = malloc(sizeof(list_s));

    new_element->value = new_value;
    new_element->next = *element;
    *element = new_element;
}
