/*
** EPITECH PROJECT, 2021
** tests
** File description:
** tests_sokoban
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(move_boxes_down, moxe_a_boxe_down)
{
    char **map = get_map("tests/maps/map8.txt");
    move_boxes_down(map);
    cr_assert_str_eq(map[5], "#  X  #\n");
    map = get_map("tests/maps/map9.txt");
    move_boxes_down(map);
    cr_assert_str_eq(map[3], "# X #\n");
        map = get_map("tests/maps/map10.txt");
    move_boxes_down(map);
    cr_assert_str_eq(map[2], " X \n");
}

Test(move_boxes_right, moxe_a_boxe_right)
{
    char **map = get_map("tests/maps/map8.txt");
    move_boxes_right(map);
    cr_assert_str_eq(map[3], "#OX PX#\n");
    map = get_map("tests/maps/map9.txt");
    move_boxes_right(map);
    cr_assert_str_eq(map[2], "#XPX#\n");
    map = get_map("tests/maps/map10.txt");
    move_boxes_right(map);
    cr_assert_str_eq(map[1], "XPX\n");
}

Test(move_boxes_left, moxe_a_boxe_left)
{
    char **map = get_map("tests/maps/map8.txt");
    move_boxes_left(map);
    cr_assert_str_eq(map[3], "#XP XO#\n");
    map = get_map("tests/maps/map9.txt");
    move_boxes_left(map);
    cr_assert_str_eq(map[2], "#XPX#\n");
    map = get_map("tests/maps/map10.txt");
    move_boxes_left(map);
    cr_assert_str_eq(map[1], "XPX\n");
}

Test(move_boxes_up, moxe_a_boxe_up)
{
    char **map = get_map("tests/maps/map8.txt");
    move_boxes_up(map);
    cr_assert_str_eq(map[1], "#  X  #\n");
    map = get_map("tests/maps/map9.txt");
    move_boxes_up(map);
    cr_assert_str_eq(map[1], "# X #\n");
    map = get_map("tests/maps/map10.txt");
    move_boxes_up(map);
    cr_assert_str_eq(map[0], " X \n");
}