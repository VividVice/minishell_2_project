/*
** EPITECH PROJECT, 2022
** my_getenv.c
** File description:
** fct who return the pointer of the env
*/

#include "my_sh.h"
#include "my_lib.h"

char *my_getenv(char **env, char *variable)
{
    char *temp = NULL;
    int i = 0;

    if (env == NULL || variable == NULL)
        return (NULL);
    temp = my_strcat(variable, "=");

    while (env[i])
    {
        if (my_strncmp(env[i], temp, my_strlen(temp)) == 0) {
            free(temp);
            return (env[i]);
        }
        i++;
    }

    free(temp);
    return (NULL);
}
