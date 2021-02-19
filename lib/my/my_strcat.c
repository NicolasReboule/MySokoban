/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** Concatenates two strings
*/

#include "my.h"
#include "stdlib.h"

char *my_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;
    char *res = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src)));

    while (dest[i] != '\0') {
        res[i] = dest[i];
        i = i + 1;
    }
    while (src[j] != '\0') {
        res[i] = src[j];
        i = i + 1;
        j = j + 1;
    }
    res[i] = '\0';
    return (res);
}
