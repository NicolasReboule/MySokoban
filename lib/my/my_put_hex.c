/*
** EPITECH PROJECT, 2020
** my_put_hex
** File description:
** put the hex of table ascii
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

int my_put_hex_lowcase(long long int nb)
{
    long long int i = 1;
    int n = 0;

    if (nb < 0 || nb == 0)
        nb = negativ_or_null(nb);
    while (i <= nb) {
        i = i * 16;
    }
    i = i / 16;
    while (i != 0) {
        if (nb / i > 9 && nb / i < 16)
            my_putchar(nb / i + 87);
        else
            my_putchar(nb / i + 48);
        n++;
        nb = nb % i;
        i = i / 16;
    }
    return (n);
}

int my_put_hex_uppercase(long long int nb)
{
    long long int i = 1;
    int n = 0;

    if (nb < 0 || nb == 0)
        nb = negativ_or_null(nb);
    while (i <= nb) {
        i = i * 16;
    }
    i = i / 16;
    while (i != 0) {
        if (nb / i > 9 && nb / i < 16)
            my_putchar(nb / i + 55);
        else
            my_putchar(nb / i + 48);
        n++;
        nb = nb % i;
        i = i / 16;
    }
    return (n);
}