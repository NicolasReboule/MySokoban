/*
** EPITECH PROJECT, 2020
** my_strdup
** File description:
** my_strdup
*/

#include <stdlib.h>

int my_strlen(char const *str);

char my_putstr(char const *str);

char *my_strdup(const char *str)
{
    int ty = my_strlen(str);
    char *cpy = malloc(sizeof(int) * ty + 1);
    int i = 0;

    while (str[i] != '\0') {
        cpy[i] = str[i];
        i++;
    }
    cpy[i] = '\0';
    return (cpy);
}
