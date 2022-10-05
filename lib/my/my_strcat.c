/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** fct my_strcat
*/

#include "my_sh.h"
#include "my_lib.h"

char *my_strcat(char *str1, char *str2)
{
    char *result = my_calloc_str(my_strlen(str1) + my_strlen(str2));
    int i = 0;

    if (str1 != NULL)
        for (;str1[i]; i++)
            result[i] = str1[i];
    if (str2 != NULL)
        for (int j = 0; str2[j]; j++, i++)
            result[i] = str2[j];
    return (result);
}
