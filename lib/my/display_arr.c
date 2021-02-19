/*
** EPITECH PROJECT, 2021
** display_arr
** File description:
** display_arr
*/

#include "my.h"

void display_arr(char **arr)
{
    int j = 0;

    for (; arr[j]; j++) {
        my_printf("%s", arr[j]);
    }
}