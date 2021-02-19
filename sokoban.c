/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-nicolas.reboule
** File description:
** sokoban
*/

#include "my.h"

void displayw_arr(char **arr)
{
    int i = 0;

    for (; arr[i]; i++)
    printw(arr[i]);
}

char **check_imputs(char **map)
{
    int ch = getch();
    switch (ch) {
        case 32:
            endwin();
            exit(0);
        case KEY_DOWN:
            map = move_down(map);
            break;
        case KEY_UP:
            map = move_up(map);
            break;
        case KEY_RIGHT:
            map = move_right(map);
            break;
        case KEY_LEFT:
            map = move_left(map);
            break;
    }
    return (map);
}

void game_loop(char **map)
{
    initscr();
    keypad(stdscr, true);
    displayw_arr(map);
    while (1) {
        map = check_imputs(map);
        clear();
        displayw_arr(map);
        refresh();
    }
    endwin();
}

void my_sokoban(char *filepath)
{
    char **map;
    check_map(filepath);
    map = get_map(filepath);
    game_loop(map);
}