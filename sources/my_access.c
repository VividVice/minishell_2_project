/*
** EPITECH PROJECT, 2022
** my_access.c
** File description:
** fct who treat the access of the binary
*/

#include "my_sh.h"
#include "my_lib.h"

int my_access(char *str, char *path)
{
    char **temp = NULL;
    char *pwd = NULL;

    if (path != NULL) {
        temp = my_strtab(path + 5, ':');
        for (int i = 0; temp[i]; i++) {
            pwd = my_strcat_path(temp[i], str);
            if (access(pwd, F_OK) != -1 && open(pwd, O_RDONLY) != -1) {
                my_cmd(pwd);
                return (0);
            }
            free (pwd);
        }
    }
    return (-1);
}
