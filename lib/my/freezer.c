/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-nicolas.reboule
** File description:
** freezer
*/

#include "my.h"

void free_what(char **format, va_list list)
{
    if (format[0][1] == 's')
        free_str(va_arg(list, char *));
    if (format[0][1] == 'C')
        free_arr_char(va_arg(list, char **));
    if (format[0][1] == 'i')
        free_arr_int(va_arg(list, int *));
    if (format[0][1] == 'f')
        free_arr_float(va_arg(list, float *));
}

void frieza(char *format, ...)
{
    va_list list;

    va_start(list, format);
    while (format[0] != '\0') {
        if (format[0] == '%') {
            free_what(&format, list);
            format += 2;
        }
        else {
            format++;
        }
    }
    va_end(list);
}