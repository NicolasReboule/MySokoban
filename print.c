/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-nicolas.reboule
** File description:
** print
*/

#include "my.h"

void can_i_print_map(char **map)
{
    int x = 0;
    int y = 0;

    get_map_length(map, &x, &y);
    if (COLS >= x && LINES >= y)
        displayw_arr(map);
    else
        mvprintw((LINES / 2), (COLS / 2) - 14, MSG);
}