/*
** EPITECH PROJECT, 2022
** my_strncmp.c
** File description:
** fct who comp two string by the size
*/

#include "my_sh.h"
#include "my_lib.h"

int my_strncmp(char *str1, char *str2, int n)
{
    if (my_strlen(str1) < n || my_strlen(str2) < n)
        return (-1);
    for (int i = 0; i != n; i++)
        if (str1[i] != str2[i])
            return (-1);
    return (0);
}
