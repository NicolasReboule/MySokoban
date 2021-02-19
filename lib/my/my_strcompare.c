/*
** EPITECH PROJECT, 2021
** str_compare
** File description:
** my_strcompare
*/

#include "my.h"
#include <stddef.h>

int str_compare(char *str1, char *str2)
{
    int i = 0;
    if (str1 == NULL || str2 == NULL)
        return (0);
    if (my_strlen(str1) != my_strlen(str2))
        return (0);
    while (str1[i] != '\0') {
        if (str1[i] != str2[i])
            return (0);
        i++;
    }
    return (1);
}