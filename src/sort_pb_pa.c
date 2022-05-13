/*
** EPITECH PROJECT, 2021
** sort_pa_pb.c
** File description:
** sort_pa_pb
*/
#include "../include/my.h"

int sort_pb_pa(list_s **first, list_s **second)
{
    push(first, (*second)->value);
    delete_first(second);
    return (0);
}
