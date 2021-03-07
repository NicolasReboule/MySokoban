/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-nicolas.reboule
** File description:
** check_lose
*/

#include "my.h"

void check_lose_check(int i, int j, char **map, int *nb_boxes)
{
    if (map[j][i] == 'X') {
        if (check_void_4(map, &j, &i, nb_boxes))
            return;
        if (check_void_3(map, &j, &i, nb_boxes))
            return;
        if (check_void_1(map, &j, &i, nb_boxes))
            return;
        if (check_void_2(map, &j, &i, nb_boxes))
            return;
    }
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