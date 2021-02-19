/*
** EPITECH PROJECT, 2020
** print_long
** File description:
** my_print_long
*/

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

void print_long_long(va_list list, int **nb, char ***format)
{
    if (format[0][0][3] == 'u' || format[0][0][3] == 'i' ||
    format[0][0][3] == 'd')
        **nb = **nb + my_put_nbr(va_arg(list, long long int));
    if (format[0][0][3] == 'o')
        **nb = **nb + my_put_oct(va_arg(list, long long int));
    if (format[0][0][3] == 'x')
        **nb = **nb + my_put_hex_lowcase(va_arg(list, long long int));
    if (format[0][0][3] == 'X')
        **nb = **nb + my_put_hex_uppercase(va_arg(list, long long int));
    else if (format[0][0][3] == 'b')
        **nb = **nb + my_put_binary(va_arg(list, long long int));
}

void print_long(va_list list, int **nb, char ***format)
{
    if (format[0][0][2] == 'u' || format[0][0][2] == 'i' ||
    format[0][0][2] == 'd')
        **nb = **nb + my_put_nbr(va_arg(list, long int));
    if (format[0][0][2] == 'o')
        **nb = **nb + my_put_oct(va_arg(list, long int));
    if (format[0][0][2] == 'x')
        **nb = **nb + my_put_hex_lowcase(va_arg(list, long int));
    if (format[0][0][2] == 'X')
        **nb = **nb + my_put_hex_uppercase(va_arg(list, long int));
    if (format[0][0][2] == 'b')
        **nb = **nb + my_put_binary(va_arg(list, long int));
}

void my_print_long(va_list list, int *nb, char **format)
{
    if (format[0][1] == 'l' && format[0][2] == 'l') {
        print_long_long(list, &nb, &format);
        (*format) = (*format) + 3;
    }
    else {
        print_long(list, &nb, &format);
        (*format) = (*format) + 2;
    }
}