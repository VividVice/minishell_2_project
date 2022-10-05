/*
** EPITECH PROJECT, 2022
** replace_char.c
** File description:
** fct who replace a char
*/

#include "my_sh.h"
#include "my_lib.h"

void replace_char(char *str, char find, char replace)
{
    if (str == NULL)
        return;
    for (int i = 0; str[i]; i++)
        if (str[i] == find)
            str[i] = replace;
}
