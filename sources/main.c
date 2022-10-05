/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main fct
*/

#include "my_sh.h"
#include "my_lib.h"

char *get_pwd(void)
{
    char *path = my_calloc_str(PATH_MAX);

    getcwd(path, 100);
    return (path);
}

int main(int ac, char **av, char **env)
{
    (void) ac;
    (void) av;
    char *pwd[4] = {"setenv", "PWD", get_pwd(), NULL};

    env = my_tabdup(env);
    env = my_setenv(pwd, env);
    single_old(my_calloc_str(1));
    my_input(env);
}
