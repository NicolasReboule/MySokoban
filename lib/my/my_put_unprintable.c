/*
** EPITECH PROJECT, 2020
** my_put_unprintable
** File description:
** my_put_unprintable
*/

#include "my.h"

void print_octal(char c, int *nb)
{
    if (c < 8) {
        my_putchar('0');
        my_putchar('0');
        *nb = *nb + my_put_oct(c) + 2;
    }
    else if (c < 64) {
        my_putchar('0');
        *nb = *nb + my_put_oct(c) + 1;
    }
    else
        *nb = *nb + my_put_oct(c);
}

int my_put_unprintable(char *str)
{
    int i = 0;
    int nb = 0;

    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            print_octal(str[i], &nb);
        }
        else
            my_putchar(str[i]);
        i++;
        nb++;
    }
    return (nb);
}