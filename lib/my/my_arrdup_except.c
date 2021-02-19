/*
** EPITECH PROJECT, 2021
** my_arrdup
** File description:
** my_arrdup
*/

#include "my.h"

char **my_arrdup_except(char **arr, char *str)
{
    int len = my_arrlen(arr);
    char **res = malloc(sizeof(char *) * (len + 1));
    int i = 0;

    for (; arr[i] != NULL; i++) {
        if (str_compare(str, my_revcut(arr[i], '='))) {
            i++;
        }
        if (arr[i] != NULL) {
            res[i] = my_strdup(arr[i]);
        }
    }
    res[i] = NULL;
    return (res);
}