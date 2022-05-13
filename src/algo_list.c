/*
** EPITECH PROJECT, 2021
** algo_list.c
** File description:
** algo_list
*/
#include "../include/my.h"

int algo_list(list_s **l_a, list_s **l_b)
{
    while (!(sorting_list((*l_a)) == true && (*l_b) == NULL)) {
        if ((*l_a)->value > (*l_a)->next->value) {
            sort_sa(*l_a);
        } else if (sorting_list((*l_a)) == false &&
        (*l_a)->next->next != NULL) {
            sort_pb_pa(l_b, l_a);
            my_printf("pb");
        } else {
            sort_pb_pa(l_a, l_b);
            my_printf("pa");
        }
        if (!(sorting_list((*l_a)) == true && (*l_b) == NULL))
            my_printf(" ");
    }
    my_printf("\n");
    return (0);
}
