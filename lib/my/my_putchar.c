/*
** EPITECH PROJECT, 2020
** my_putchar
** File description:
** Displays a given character
*/

#include <unistd.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}
