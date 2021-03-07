/*
** EPITECH PROJECT, 2021
** tests
** File description:
** tests_sokoban
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(map_to_arr, get_the_map_from_str)
{
    char *str = "#####\n#OXP#\n#####\n";
    char *str2 = "#####\0";
    char *map[] = {my_strdup("#####\n"),
                    my_strdup("#OXP#\n"),
                    my_strdup("#####\n")};
    char **res = map_to_arr(str);
    char **res2 = map_to_arr(str2);

    cr_assert_str_eq(res2[0], str2);
    cr_assert_str_eq(map[0], res[0]);
    cr_assert_str_eq(map[1], res[1]);
    cr_assert_str_eq(map[2], res[2]);
}

Test(get_map, get_the_map_from_file)
{
    char *map[] = {my_strdup("#####\n"),
                    my_strdup("#OXP#\n"),
                    my_strdup("#####\n")};
    char **res = get_map("tests/maps/map1.txt");

    cr_assert_str_eq(map[0], res[0]);
    cr_assert_str_eq(map[1], res[1]);
    cr_assert_str_eq(map[2], res[2]);
}

Test(end, check_end_return)
{
    int i = end(0);
    int j = end(1);
    int k = end(2);

    cr_assert_eq(i, 0);
    cr_assert_eq(j, 1);
    cr_assert_eq(k, 1);
}

Test(lose, check_lose_effect)
{
    int i = 0;
    int j = 0;

    lose(1);
    i = end(0);
    lose(-1);
    j = end(0);
    cr_assert_eq(i, 0);
    cr_assert_eq(j, 2);
}

Test(compare_maps, compare_O_in_maps)
{
    int nb = 0;
    char *map[] = {my_strdup("########\n"),
                my_strdup("# PX X #\n"),
                my_strdup("#      #\n"),
                my_strdup("########\n"),
                NULL};
    char *map2[] = {my_strdup("#XP #\n"), NULL};
    compare_maps(map2, "tests/maps/map3.txt");
    nb = end(0);
    compare_maps(map, "tests/maps/map2.txt");
    cr_assert_str_eq(map[2], "# O    #\n");
    cr_assert_eq(nb, 1);
}