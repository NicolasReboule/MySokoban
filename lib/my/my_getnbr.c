/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** return a number from a string
*/
#include <stdio.h>

char dashes(char const *str, int *f)
{
    int d = 0;

    while (str[*f] != '\0' && str[*f] == '-' || str[*f] == '+') {
        if (str[*f] == '-') {
            d++;
        }
        (*f)++;
    }
    return (d);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;
    int dash = dashes(str, &i);

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nb = str[i] - 48 + (nb * 10);
        }
        else
            break;
        i++;
    }
    dash = dash % 2;
    if (dash == 1)
        nb = nb * (-1);
    return (nb);
}
