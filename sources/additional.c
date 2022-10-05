/*
** EPITECH PROJECT, 2022
** handling_cmd.c
** File description:
** fct who treat cmd
*/

#include "my_sh.h"
#include "my_lib.h"

int verify_cond_cmd(char *cmd, int i,int nb)
{
    if (cmd[i] != ' ' && cmd[i] != '|' && cmd[i] != '\0') {
        nb = 0;
        return nb;
    }

    if (nb == 2) {
        return (-1);
    }
    return (-1);
}