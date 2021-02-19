/*
** EPITECH PROJECT, 2021
** my_strndup.c
** File description:
** my_strndup
*/

#include "my.h"

char *my_strndup(char *str, int n)
{
    char *res;
    int i = 0;
    if (str == NULL || str[i] == '\0') {
        return (NULL);
    }
    if (my_strlen(str) < n) {
        res = malloc(sizeof(char) * (my_strlen(str) + 1));
        for (;i != my_strlen(str); i++) {
            res[i] = str[i];
        }
        res[i] = '\0';
    } else {
        res = malloc(sizeof(char) * (n + 1));
        for (i = 0; i != n; i++) {
            res[i] = str[i];
        }
        res[i] = '\0';
    }
    return (res);
}