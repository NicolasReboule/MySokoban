/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** printf but mine
*/

#include <stdarg.h>
#include "my.h"
#include <stdio.h>
#include <stdlib.h>

void print_1(va_list list, char *format, int **nb)
{
    if (format[1] == 'c' || format[1] == 'C') {
        my_putchar(va_arg(list, int));
        **nb = **nb + 1;
    }
    if (format[1] == 's') {
        **nb = **nb + my_putstr(va_arg(list, char *));
    }
    if (format[1] == 'd' || format[1] == 'i' || format[1] == 'u')
        **nb = **nb + my_put_nbr(va_arg(list, int));
}

void print_3(va_list list, char ***format, int ***nb)
{
    if (format[0][0][1] == 'o')
        ***nb = ***nb + my_put_oct(va_arg(list, int));
    if (format[0][0][1] == '%') {
        my_putchar('%');
        ***nb = ***nb + 1;
    }
    if (format[0][0][1] == 'f')
        ***nb = ***nb + my_put_float(va_arg(list, double));
}

void print_2(va_list list, char **format, int **nb)
{
    if (format[0][1] == 'o' || format[0][1] == '%' || format[0][1] == 'f' ||
    format[0][1] == 'l')
        print_3(list, &format, &nb);
    if (format[0][1] == 'S')
        **nb = **nb + my_put_unprintable(va_arg(list, char *));
    if (format[0][1] == 'x')
        **nb = **nb + my_put_hex_lowcase(va_arg(list, int));
    if (format[0][1] == 'X')
        **nb = **nb + my_put_hex_uppercase(va_arg(list, int));
    if (format[0][1] == 'b')
        **nb = **nb + my_put_binary(va_arg(list, int));
}

void print_all(va_list list, char **format, int *nb)
{
    if (format[0][1] == 's' || format[0][1] == 'd' || format[0][1] == 'c' ||
    format[0][1] == 'i' || format[0][1] == 'C' || format[0][1] == 'u') {
        print_1(list, *format, &nb);
        (*format)++;
        return;
    }
    else if (format[0][1] == 'o' || format[0][1] == '%' ||
    format[0][1] == 'S' || format[0][1] == 'x' || format [0][1] == 'X' ||
    format[0][1] == 'b' || format[0][1] == 'l' || format[0][1] == 'f') {
        print_2(list, format, &nb);
        (*format)++;
        return;
    }
}

int my_printf(char *format, ...)
{
    va_list list;
    int nb = 0;
    va_start(list, format);
    while (format[0] != '\0') {
        if (format[0] == '%' && format[1] == 'l') {
            my_print_long(list, &nb, &format);
            format++;
        }
        if (format[0] == '%')
            print_all(list, &format, &nb);
        else {
            my_putchar(format[0]);
            nb++;
        }
        format++;
    }
    va_end(list);
    return (nb);
}