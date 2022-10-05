/*
** EPITECH PROJECT, 2022
** single_env.c
** File description:
** single env c
*/

#include "my_sh.h"
#include "my_lib.h"

char **single_env(char **env)
{
    static char **str;

    if (env == NULL)
        return (str);
    str = env;
    return (str);
}
