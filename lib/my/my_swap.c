/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** Swap content of two integers whose adresses are given
*/

void my_putchar(char c);

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}