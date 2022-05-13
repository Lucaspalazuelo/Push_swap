/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdlib.h>
    #include <stdbool.h>
    #include "list.h"
    #include <stdarg.h>

int check_flags(char c);
int create_list(list_s * element, int ac, char **av);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_atoi(char *str);
int my_printf(const char *str, ...);
void flags(const char *str, va_list ap);
void push(list_s **element, int new_value);
int push_end(list_s **element_ref, int new_value);
int sort_pb_pa(list_s **first, list_s **second);
int sort_sa(list_s *element);
int algo_list(list_s **l_a, list_s **l_b);
bool sorting_list(list_s *element);
int main(int ac, char **av);
int delete_first(list_s **element);

#endif /* !MY_H_ */
