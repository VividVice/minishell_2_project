/*
** EPITECH PROJECT, 2022
** my_strdup.c
** File description:
** fct who copy a string
*/

#include "my_sh.h"
#include "my_lib.h"

char *my_strdup(char *str)
{
    char *result = my_calloc_str(my_strlen(str));

    if (str == NULL)
        return (NULL);
    for (int i = 0; str[i]; i++)
        result[i] = str[i];
    return (result);
}
