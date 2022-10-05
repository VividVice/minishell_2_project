/*
** EPITECH PROJECT, 2022
** my_exit_cmd.c
** File description:
** exit cmd
*/

#include "my_sh.h"
#include "my_lib.h"

char **my_exit(char **cmd, char **env)
{
    my_free(cmd);
    my_free(env);
    exit(0);
    return (env);
}
