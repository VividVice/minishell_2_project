/*
** EPITECH PROJECT, 2022
** single_old.c
** File description:
** fct old path
*/

#include "my_sh.h"
#include "my_lib.h"

char *single_old(char *str)
{
    static char *save = NULL;

    if (str == NULL)
        return (save);
    save = str;
    return (save);
}
