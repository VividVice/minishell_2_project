/*
** EPITECH PROJECT, 2022
** my_sh.h
** File description:
** header of the project minishell 2
*/

#ifndef MY_LIB
    #define MY_LIB

    #include "my_sh.h"

char *clean_string(char *);
int my_strlen(char *);
int my_strlen_array(char **);
int my_strncmp(char *, char *, int);
int my_strcmp(char *, char *);
char **my_calloc_array(int);
char *my_calloc_str(int);
void my_free(char **);
void my_putstr(char *, int);
char *my_strcat(char *, char *);
void write_my_error(char *);
void replace_char(char *, char, char);
char *my_strcat_path(char *, char *);
void my_error(char *, int);
char *clean_string(char *);

#endif /*MY_LIB*/