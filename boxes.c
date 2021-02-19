/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-nicolas.reboule
** File description:
** boxes
*/

#include "my.h"

char **move_boxes_left(char **map)
{
    int x = 0;
    int y = 0;

    get_player_pos(map, &x, &y);
    if (map[y][x - 2]  == ' ' || map[y][x - 2]  == '0') {
        map[y][x - 2]  = 'X';
        map[y][x - 1]  = 'P';
        map[y][x]  = ' ';
    }
    return (map);
}

char **move_boxes_right(char **map)
{
    int x = 0;
    int y = 0;

    get_player_pos(map, &x, &y);
    if (map[y][x + 2]  == ' ' || map[y][x + 2]  == '0') {
        map[y][x + 2]  = 'X';
        map[y][x + 1]  = 'P';
        map[y][x]  = ' ';
    }
    return (map);
}

char **move_boxes_up(char **map)
{
    int x = 0;
    int y = 0;

    get_player_pos(map, &x, &y);
    if (map[y - 2][x]  == ' ' || map[y - 2][x]  == '0') {
        map[y - 2][x]  = 'X';
        map[y - 1][x]  = 'P';
        map[y][x]  = ' ';
    }
    return (map);
}

char **move_boxes_down(char **map)
{
    int x = 0;
    int y = 0;

    get_player_pos(map, &x, &y);
    if (map[y + 2][x]  == ' ' || map[y + 2][x]  == '0') {
        map[y + 2][x]  = 'X';
        map[y + 1][x]  = 'P';
        map[y][x]  = ' ';
    }
    return (map);
}