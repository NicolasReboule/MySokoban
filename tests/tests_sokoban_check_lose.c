/*
** EPITECH PROJECT, 2021
** tests
** File description:
** tests_sokoban
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(check_lose, check_if_the_player_lost)
{
    char **map = get_map("tests/maps/map11.txt");
    int nb = 0;
    check_lose(map);
    nb = end(0);
    cr_assert_eq(nb, 2);
}

Test(check_void_1, check_if_void_1)
{
    int nb_boxes = 1;
    int x = 0;
    int y = 0;
    char **map = get_map("tests/maps/map12.txt");
    int nb = check_void_1(map, &x, &y, &nb_boxes);
    cr_assert_eq(nb, 1);
    cr_assert_eq(nb_boxes, 0);
}