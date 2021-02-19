/*
** EPITECH PROJECT, 2020
** my_put_binary
** File description:
** my_put_binary
*/

#include "my.h"

int my_put_binary(long long int nb)
{
    long long int i = 1;
    int n = 0;

    if (nb < 0 || nb == 0)
        nb = negativ_or_null(nb);
    while (i <= nb) {
        i = i * 2;
    }
    i = i / 2;
    while (i != 0) {
        my_putchar(nb / i + 48);
        nb = nb % i;
        i = i / 2;
        n++;
    }
    return (n);
}