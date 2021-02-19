/*
** EPITECH PROJECT, 2021
** my_arrlen
** File description:
** my_arrlen
*/

int my_arrlen(char **arr)
{
    int i = 0;
    while (*arr) {
        i++;
        arr++;
    }
    return (i);
}