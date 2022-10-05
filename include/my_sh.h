/*
** EPITECH PROJECT, 2022
** my_sh.h
** File description:
** header of the project minishell 2
*/

#ifndef MY_SH
    #define MY_SH

    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <fcntl.h>
    #include <linux/limits.h>
    #include <sys/wait.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <errno.h>
    #include <string.h>
    #include <stdbool.h>
    #include "my_lib.h"

char *my_getenv(char **, char *);
char **my_tabdup(char **);
char *my_strdup(char *);
char **my_unsetenv(char **, char **);
char **my_env(char **, char **);
char **my_setenv(char **, char **);
char **my_strtab(char *, char);
void my_input(char **);
void my_treat_cmd(char **, char **);
char *my_cmd(char *);
int my_access(char *, char *);
char **single_env(char **);
void my_pipe(char *, char **);
int is_builtin(char *);
char **my_exit(char **, char **);
char *single_old(char *);
char *get_pwd(void);
char **my_cd(char **, char **);
void check_signal(int);
void my_pipe_actions(char **,char **,int ,char **);
void if_last_cmd(char **, char **, int , char **);
int open_double_readir(char **);
int is_double_redir(char *);
int verify_cond_cmd(char *, int ,int) ;

#endif /*MY_SH*/
