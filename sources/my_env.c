/*
** EPITECH PROJECT, 2022
** my_env.c
** File description:
** my env
*/

#include "my_sh.h"
#include "my_lib.h"

char **my_env(char **cmd, char **env)
{
    (void) cmd;
    int i = 0;

    while (env[i])
    {
        my_putstr(env[i], 1);
        write(1, "\n", 1);
        i++;
    }
    return (env);
}
