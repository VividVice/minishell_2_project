/*
** EPITECH PROJECT, 2022
** my_strcmp.c
** File description:
** fct strcmp
*/

#include "my_sh.h"
#include "my_lib.h"

int my_strcmp(char *str1, char *str2)
{
    if (my_strlen(str1) != my_strlen(str2))
        return (-1);
    for (int i = 0; str1[i]; i++)
        if (str1[i] != str2[i])
            return (-1);
    return (0);
}
