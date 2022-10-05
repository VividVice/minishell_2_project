/*
** EPITECH PROJECT, 2022
** my_strcat_path.c
** File description:
** fct strcat path
*/

#include "my_sh.h"
#include "my_lib.h"

char *my_strcat_path(char *str1, char *str2)
{
    char *result = my_calloc_str(my_strlen(str1) + my_strlen(str2) + 1);
    int i = 0;

    if (str1 != NULL)
        for (; str1[i]; i++)
            result[i] = str1[i];
    if (i != 0 && str1[i - 1] != '/')
        result[i++] = '/';
    if (str2 != NULL)
        for (int j = 0; str2[j]; j++, i++)
            result[i] = str2[j];
    return (result);
}
