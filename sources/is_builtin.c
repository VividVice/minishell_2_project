/*
** EPITECH PROJECT, 2022
** is_builtin.c
** File description:
** is a builtin
*/

#include "my_sh.h"
#include "my_lib.h"

int is_builtin(char *cmd)
{
    char *built_in[6] = {"setenv", "unsetenv", "env", "cd", "exit", NULL};

    for (int i = 0; built_in[i]; i++)
        if (my_strcmp(built_in[i], cmd) == 0)
            return (1);
    return (0);
}

int open_double_readir(char **temp)
{
    int cmd = 0;

    if (is_double_redir(NULL) == 0){
        cmd = open(clean_string(temp[1]), O_RDWR | O_CREAT | O_TRUNC, 0666);
    } else {
        cmd = open(clean_string(temp[1]), O_RDWR | O_CREAT | O_APPEND, 0666);
    }
    return cmd;
}

//TODO

void my_pipe_actions(char **cmd,char **temp,int fd,char **env)
{
    int pid = fork();
    int status = 0;

    if (pid == 0) {
        if_last_cmd(cmd, temp, fd, env);
    } else {
        waitpid(pid, &status, F_OK);
        check_signal(status);
        if (is_builtin(cmd[0]) == 1)
            my_treat_cmd(cmd, env);
    }
}
