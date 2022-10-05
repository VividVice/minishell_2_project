/*
** EPITECH PROJECT, 2022
** my_fct input
** File description:
** fct input
*/

#include "my_sh.h"
#include "my_lib.h"

//TODO

static int check_error_pipe(char *cmd)
{
    int nb = 0;
    for (int i = 0, count = 0; cmd[i]; i++) {
        if (cmd[0] == '|')
            return (-1);
        (cmd[i] == '|') ? nb++ : 0;
        (cmd[i] == '>') ? count++ : 0;
        if (count > 0 && nb != 0) {
            my_putstr("Ambiguous output redirect.\n", 2);
            return (-2);
        }
        verify_cond_cmd(cmd,i,nb);
    }
    if (nb != 0)
        return (-1);
    return (0);
}

static void verify_cmd_er(char **cmd,char **env)
{
    int num = 0;

    for (int i = 0; cmd[i]; i++) {
        if ((num = check_error_pipe(cmd[i])) == -1)
            my_putstr("Invalid null command.\n", 2);
        else if (cmd[i][0] != '\0' && num != -2)
            my_pipe(cmd[i], env);
        }

}

void my_input(char **env)
{
    char *temp = NULL;
    char **cmd = NULL;
    size_t len = 0;

    single_env(env);
    while (1) {
        env = single_env(NULL);

        if(isatty(0))
            my_putstr("> ", 1);

        if(getline(&temp, &len, stdin) == -1)
            exit(0);

        replace_char(temp, '\n', '\0');
        cmd = my_strtab(temp, ';');
        verify_cmd_er(cmd,env);
    }
}
