/*
** EPITECH PROJECT, 2022
** my_tabdup.c
** File description:
** fct who dup a new array
*/

#include "my_sh.h"
#include "my_lib.h"

char **my_tabdup(char **str)
{
    int nb = my_strlen_array(str);
    char **result = my_calloc_array(nb);

    if (str == NULL)
        return (NULL);
    for (int i = 0; str[i]; i++)
        result[i] = my_strdup(str[i]);
    return (result);
}
