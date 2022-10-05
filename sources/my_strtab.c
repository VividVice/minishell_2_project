/*
** EPITECH PROJECT, 2022
** my_strtab.c
** File description:
** str tab
*/

#include "my_sh.h"
#include "my_lib.h"

static int count_sep(char *str, char c)
{
    int nb = 1;
    int i = 0;

    for (; str[i] && (str[i] == c || str[i] == ' '); i++);
    for (; str[i]; i++) {
        if (str[i] == c)
            nb++;
        for (; str[i] && str[i] == c; i++);
    }
    return (nb);
}

static int count_size_word(char *str, int i, char sep)
{
    int nb = 1;

    for (;str[i] && str[i] == sep; i++);
    for (; str[i] && str[i] != sep; i++, nb++);
    return (nb);
}

static char **str_alloc_tab(char *str,char sep,int i,char **res)
{
    int k = 0;

    for (int j = 0; str[i]; i++) {
        if (str[i] == sep && str[i + 1] != sep && str[i + 1]) {
            res[++j] = my_calloc_str(count_size_word(str, i, sep));
            k = 0;
        } else if (str[i] != sep)
            res[j][k++] = str[i];
    }
    return res;
}

char **my_strtab(char *str, char sep)
{
    char **result = my_calloc_array(count_sep(str, sep));
    int i = 0;

    replace_char(str, '\t', ' ');
    for (; str[i] && (str[i] == ' ' || str[i] == sep); i++);
    result[0] = my_calloc_str(count_size_word(str, i, sep));
    result = str_alloc_tab(str,sep,i,result);

    return (result);
}
