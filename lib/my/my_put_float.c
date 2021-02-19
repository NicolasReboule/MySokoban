/*
** EPITECH PROJECT, 2020
** my_put_float
** File description:
** my_put_float
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

int my_put_float(float nb)
{
    long int i = 1;
    int n;

    while (i < nb) {
        i = i * 10;
        n++;
    }
    i = 0;
    my_put_nbr((int)nb);
    i = nb * 1000000 - (int)nb * 1000000;
    my_putchar('.');
    my_put_nbr(i);
    return (n + 7);
}