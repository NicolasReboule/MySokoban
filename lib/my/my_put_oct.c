/*
** EPITECH PROJECT, 2020
** my_put_oct
** File description:
** put the octet of table ascii
*/

#include "my.h"
#include <stdlib.h>

int my_put_oct(long long int nb)
{
    long long int i = 1;
    int n = 0;

    if (nb < 0 || nb == 0)
        nb = negativ_or_null(nb);
    while (i <= nb) {
        i = i * 8;
    }
    i = i / 8;
    while (i != 0) {
        my_putchar(nb / i + 48);
        nb = nb % i;
        i = i / 8;
        n++;
    }
    return (n);
}