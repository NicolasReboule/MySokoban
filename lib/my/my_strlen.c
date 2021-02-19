/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** Counts and returns the number of characters in a given string
*/

#include <stddef.h>

int my_strlen(char const *str)
{
    int o = 0;

    while (str[o] != '\0') {
        o = o + 1;
    }
    return (o);
}
