/*
** EPITECH PROJECT, 2022
** write_my_error.c
** File description:
** fct who write a error on stderr
*/

#include "my_sh.h"
#include "my_lib.h"

void write_my_error(char *str)
{
    my_putstr("Error: ", 2);
    my_putstr(str, 2);
    my_putstr("\n", 2);
}
