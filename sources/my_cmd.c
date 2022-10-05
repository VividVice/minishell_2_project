/*
** EPITECH PROJECT, 2022
** my_cmd.c
** File description:
** singleton who save the cmd
*/

#include "my_sh.h"
#include "my_lib.h"

char *my_cmd(char *str)
{
    static char *save;

    if (str == NULL)
        return (save);
    save = str;
    return (save);
}
