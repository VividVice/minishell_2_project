/*
** EPITECH PROJECT, 2022
** clean_string.c
** File description:
** clean the string
*/

#include "my_sh.h"
#include "my_lib.h"

char *clean_string(char *str)
{
    int i = 0;

    if (str == NULL)
        return (NULL);
    for (; str[0] && str[0] == ' '; str++);
    for (; str[i] && str[i] != ' '; i++);
    str[i] = '\0';
    return (str);
}
