/*
** EPITECH PROJECT, 2021
** check_void
** File description:
** check_void
*/

#include "my.h"

int check_void_4(char **map, int *j, int *i, int *nb_boxes)
{
    if (((*j) + 1 > my_arrlen(map) - 1 || map[(*j) + 1][(*i)] == '#' ||
    map[(*j) + 1][(*i)] == 'X') && (map[(*j)][(*i) + 1] == '#' ||
    map[(*j)][(*i) + 1] == 'X' || map[(*j)][(*i) + 1] == '\n' ||
    map[(*j)][(*i) + 1] == '\0')) {
        (*nb_boxes)--;
        return (1);
    }
    return (0);
}

int check_void_3(char **map, int *j, int *i, int *nb_boxes)
{
    int nb = 0;

    if (((*j) + 1 > my_arrlen(map) - 1 || map[(*j) + 1][(*i)] == '#' ||
    map[(*j) + 1][(*i)] == 'X'))
        nb++;
    if ((*i) - 1 <  0 )
        nb++;
    else if (map[(*j)][(*i) - 1] == '#' || map[(*j)][(*i) - 1] == 'X')
        nb++;
    if (nb == 2) {
        (*nb_boxes)--;
        return (1);
    }
    return (0);
}

int check_void_2(char **map, int *j, int *i, int *nb_boxes)
{
    int nb = 0;
    if (map[(*j) - 1][(*i)] == '#' || map[(*j) - 1][(*i)] == 'X')
        nb++;
    if ((*j) - 1  < 0)
        nb++;
    else if (map[(*j)][(*i) + 1] == '#' || map[(*j)][(*i) + 1] == 'X' ||
    map[(*j)][(*i) + 1] == '\n' || map[(*j)][(*i) + 1] == '\0')
        nb++;
    if (nb == 2) {
        (*nb_boxes)--;
        return (1);
    }
    return (0);
}

int check_void_1(char **map, int *j, int *i, int *nb_boxes)
{
    int nb = 0;

    if ((*j) - 1 < 0 || map[(*j) - 1][(*i)] == '#' ||
    map[(*j) - 1][(*i)] == 'X')
        nb++;
    if ((*i) - 1 < 0 )
        nb++;
    else if (map[(*j)][(*i) - 1] == '#' || map[(*j)][(*i) - 1] == 'X')
        nb++;
    if (nb == 2)  {
        (*nb_boxes)--;
        return (1);
    }
    return (0);
}