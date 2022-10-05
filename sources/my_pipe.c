/*
** EPITECH PROJECT, 2022
** my_pipe.c
** File description:
** pipe fct
*/

#include "my_sh.h"
#include "my_lib.h"


static void check_fork(int *tb,int fd,char **cmd,char **env)
{
    int pid = fork();

    if (pid == 0) {
        close(tb[0]);
        close(0);
        dup(fd);
        close(1);
        dup(tb[1]);
        close(tb[1]);
        my_treat_cmd(cmd, env);
        if (is_builtin(cmd[0]) == 1)
            exit(0);
    }
}

static int free_cmd(char **line, char **stat, int fdis)
{
    int tb[2] = {-1, -1};
    int i = 0;

    pipe(tb);
    check_fork(tb,fdis,line,stat);
    close(fdis);
    close(tb[1]);
    while (line[i]) {
        free(line[i]);
        i++;
    }
    free(line);
    return (tb[0]);
}

int is_double_redir(char *cmd)
{
    static int status = 0;
    int i = 0;
    int num = 0;

    if (cmd == NULL)
        return (status);
    while(cmd[i]) {
        if (cmd[i] == '>')
            num++;
        if (num == 2)
            status = 1;
        i++;
    }
    return (status);
}

 void if_last_cmd(char **cmd, char **tfil, int fd, char **env)
{
    int line = 0;

    dup2(fd, 0);
    if (tfil[1] != NULL) {
        line = open_double_readir(tfil);
        dup2(line, 1);
        close(line);
    }
    if (is_builtin(cmd[0]) != 1)
        my_treat_cmd(cmd, env);
    else
        exit(0);
}

void my_pipe(char *str, char **env)
{
    int fd = dup(0);
    char **cmd = my_strtab(str, '|');
    char **temp = NULL;

    for (int i = 0; cmd[i + 1]; i++)
        fd = free_cmd(my_strtab(cmd[i], ' '), env, fd);
    is_double_redir(cmd[my_strlen_array(cmd) - 1]);
    temp = my_strtab(cmd[my_strlen_array(cmd) - 1], '>');
    cmd = my_strtab(temp[0], ' ');
    my_pipe_actions(cmd,temp,fd,env);
}
