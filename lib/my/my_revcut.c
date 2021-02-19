/*
** EPITECH PROJECT, 2021
** my_revcut
** File description:
** my_revcut
*/

#include "my.h"

char *my_revcut(char *str, char c)
{
    int i = my_strlen(str);
    char *fakestr = my_strdup(str);

    while (str[i] != c)
        i--;
    fakestr[i] = '\0';
    return (fakestr);
}