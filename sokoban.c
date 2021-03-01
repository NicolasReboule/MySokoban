/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-nicolas.reboule
** File description:
** sokoban
*/

#include "my.h"

int get_nb_boxes(char **map)
{
    int i = 0;
    int j = 0;
    int nb_boxes = 0;

    for (; map[j]; j++) {
        for (i = 0; map[j][i]; i++)
            (map[j][i] == 'X') ? nb_boxes++ : 0;
    }
    return (nb_boxes);
}

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

void game_loop(char **map, char *filepath)
{
    int x = 0;
    int y = 0;
    initscr();
    keypad(stdscr, true);
    get_map_length(map, &x, &y);
    can_i_print_map(map);
    while (1) {
        if (end(0) != 0)
            break;
        map = check_imputs(map);
        map = compare_maps(map, filepath);
        map = check_lose(map);
            clear();
        if (COLS < x || LINES < y)
            mvprintw((LINES / 2), (COLS / 2) - 7, "Map can't fit");
        else
            displayw_arr(map);
        refresh();
    }
}

void my_sokoban(char *filepath)
{
    char **map;
    check_map(filepath);
    map = get_map(filepath);
    game_loop(map, filepath);
    delwin(stdscr);
    endwin();
    if (end(0) == 1)
        exit(0);
    if (end(0) == 2)
        exit(1);
    frieza("%C", map);
}