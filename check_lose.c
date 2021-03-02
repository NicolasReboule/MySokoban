/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-nicolas.reboule
** File description:
** check_lose
*/

#include "my.h"

int check_4(char **map, int *j, int *i, int *nb_boxes)
{
    if ((map[(*j) + 1][(*i)] == '#' || map[(*j) + 1][(*i)] == 'X') &&
        (map[(*j)][(*i) + 1] == '#' || map[(*j)][(*i) + 1] == 'X')) {
        (*nb_boxes)--;
        return (1);
    }
    return (0);
}

int check_3(char **map, int *j, int *i, int *nb_boxes)
{
    if ((map[(*j) + 1][(*i)] == '#' || map[(*j) + 1][(*i)] == 'X') &&
        (map[(*j)][(*i) - 1] == '#' || map[(*j)][(*i) - 1] == 'X')) {
        (*nb_boxes)--;
        return (1);
    }
    return (0);
}

int check_2(char **map, int *j, int *i, int *nb_boxes)
{
    if ((map[(*j) - 1][(*i)] == '#' || map[(*j) - 1][(*i)] == 'X') &&
        (map[(*j)][(*i) + 1] == '#' || map[(*j)][(*i) + 1] == 'X')) {
        (*nb_boxes)--;
        return (1);
    }
    return (0);
}

int check_1(char **map, int *j, int *i, int *nb_boxes)
{
    if ((map[(*j) - 1][(*i)] == '#' || map[(*j) - 1][(*i)] == 'X') &&
        (map[(*j)][(*i) - 1] == '#' || map[(*j)][(*i) - 1] == 'X')) {
        (*nb_boxes)--;
        return (1);
    }
    return (0);
}

char **check_lose(char **map)
{
    int nb_boxes = 0;
    int i = 0;
    int j = 0;
    nb_boxes = get_nb_boxes(map);
    for (j = 0; map[j]; j++) {
        for (i = 0; map[j][i]; i++) {
            check_lose_check(i, j, map, &nb_boxes);
        }
    }
    lose(nb_boxes);
    return (map);
}