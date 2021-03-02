/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-nicolas.reboule
** File description:
** check_lose_2
*/

#include "my.h"

void check_lose_check(int i, int j, char **map, int *nb_boxes)
{
    int nb = 0;

    if (map[j][i] == 'X') {
        nb = check_1(map, &j, &i, nb_boxes);
        if (!nb)
            nb = check_2(map, &j, &i, nb_boxes);
        if (!nb)
            nb = check_3(map, &j, &i, nb_boxes);
        if (!nb)
            nb = check_4(map, &j, &i, nb_boxes);
    }
}