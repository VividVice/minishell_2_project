/*
** EPITECH PROJECT, 2022
** my_callocarray.c
** File description:
** calloc a array
*/

#include "my_sh.h"
#include "my_lib.h"

char **my_calloc_array(int size)
{
    char **result = malloc(sizeof(char *) * (size + 1));

    if (result == NULL)
        write_my_error("Impossible to malloc");
    for (int i = 0; i <= size; i++)
        result[i] = NULL;
    return (result);
}
