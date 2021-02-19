/*
** EPITECH PROJECT, 2021
** my_strcut.c
** File description:
** my_strcut
*/

#include <stddef.h>

char *my_strcut(char *str, char c)
{
    int i = 0;
    if (str == NULL)
        return (str);
    while (str[i] != c)
        str++;
    str++;
    return (str);
}