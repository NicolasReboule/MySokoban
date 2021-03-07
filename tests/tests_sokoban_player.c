/*
** EPITECH PROJECT, 2021
** tests
** File description:
** tests_sokoban
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(move_right, move_player_right)
{
    char **map = get_map("tests/maps/map4.txt");
    move_right(map);
    cr_assert_str_eq(map[2], "#  P#\n");
    map = get_map("tests/maps/map5.txt");
    move_right(map);
    cr_assert_str_eq(map[0], "P");
    map = get_map("tests/maps/map6.txt");
    move_right(map);
    cr_assert_str_eq(map[3], "# X PX#\n");
    map = get_map("tests/maps/map7.txt");
    move_right(map);
    cr_assert_str_eq(map[3], "# O P #\n");
}

Test(move_down, move_player_down)
{
    char **map = get_map("tests/maps/map4.txt");
    move_down(map);
    cr_assert_str_eq(map[3], "# P #\n");
    map = get_map("tests/maps/map5.txt");
    move_down(map);
    cr_assert_str_eq(map[0], "P");
    map = get_map("tests/maps/map6.txt");
    move_down(map);
    cr_assert_str_eq(map[4], "#  P  #\n");
    map = get_map("tests/maps/map7.txt");
    move_down(map);
    cr_assert_str_eq(map[4], "#  P  #\n");
}

Test(move_up, move_player_up)
{
    char **map = get_map("tests/maps/map4.txt");
    move_up(map);
    cr_assert_str_eq(map[1], "# P #\n");
    map = get_map("tests/maps/map5.txt");
    move_up(map);
    cr_assert_str_eq(map[0], "P");
    map = get_map("tests/maps/map6.txt");
    move_up(map);
    cr_assert_str_eq(map[2], "#  P  #\n");
    map = get_map("tests/maps/map7.txt");
    move_up(map);
    cr_assert_str_eq(map[2], "#  P  #\n");
}

Test(move_left, move_player_left)
{
    char **map = get_map("tests/maps/map4.txt");
    move_left(map);
    cr_assert_str_eq(map[2], "#P  #\n");
    map = get_map("tests/maps/map5.txt");
    move_left(map);
    cr_assert_str_eq(map[0], "P");
    map = get_map("tests/maps/map6.txt");
    move_left(map);
    cr_assert_str_eq(map[3], "#XP X #\n");
    map = get_map("tests/maps/map7.txt");
    move_left(map);
    cr_assert_str_eq(map[3], "# P O #\n");
}

Test(get_player_pos, get_the_player_position)
{
    int x = 0;
    int y = 0;
    char **map = get_map("tests/maps/map4.txt");
    get_player_pos(map, &x, &y);
    cr_assert_eq(x, 2);
    cr_assert_eq(y, 2);
    map = get_map("tests/maps/map5.txt");
    x = 0;
    y = 0;
    get_player_pos(map, &x, &y);
    cr_assert_eq(x, 0);
    cr_assert_eq(y, 0);
    map[0] = NULL;
    x = 0;
    y = 0;
    get_player_pos(map, &x, &y);
    cr_assert_eq(x, 0);
    cr_assert_eq(y, 0);
}