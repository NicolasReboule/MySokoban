/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-nicolas.reboule
** File description:
** player
*/

#include "my.h"

void get_player_pos(char **map, int *x, int *y)
{
    for (; map[*y]; (*y)++) {
        for (*x = 0; map[*y][*x]; (*x)++) {
            if (map[*y][*x] == 'P')
                return;
        }
    }
}

char **move_left(char **map)
{
    int x = 0;
    int y = 0;
    get_player_pos(map, &x, &y);
    if (map[y][x - 1] == ' ' || map[y][x - 1] == '0') {
        map[y][x] = ' ';
        map[y][x - 1] = 'P';
    }
    if (map[y][x - 1] == 'X')
        map = move_boxes_left(map);
    return (map);
}

char **move_right(char **map)
{
    int x = 0;
    int y = 0;

    get_player_pos(map, &x, &y);
    if (map[y][x + 1] == ' ' || map[y][x + 1] == '0') {
        map[y][x] = ' ';
        map[y][x + 1] = 'P';
    }
        if (map[y][x + 1] == 'X')
        map = move_boxes_right(map);
    return (map);
}

char **move_down(char **map)
{
    int x = 0;
    int y = 0;

    get_player_pos(map, &x, &y);
    if (map[y + 1][x] == ' ' || map[y + 1][x] == '0') {
        map[y][x] = ' ';
        map[y + 1][x] = 'P';
    }
        if (map[y + 1][x] == 'X')
        map = move_boxes_down(map);
    return (map);
}

char **move_up(char **map)
{
    int x = 0;
    int y = 0;

    get_player_pos(map, &x, &y);
    if (map[y - 1][x] == ' ' || map[y - 1][x] == '0') {
        map[y][x] = ' ';
        map[y - 1][x] = 'P';
    }
    if (map[y - 1][x] == 'X')
        map = move_boxes_up(map);
    return (map);
}
