/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-nicolas.reboule
** File description:
** free_things
*/

#include "my.h"

void free_str(char *str)
{
    free(str);
    str = NULL;
}

void free_arr_char(char **arr)
{
    int j = 0;

    for (; arr[j]; j++) {
        free(arr[j]);
        arr[j] = NULL;
    }
    free(arr);
    arr = NULL;
}

void free_arr_int(int *arr)
{
    free(arr);
    arr = NULL;
}

void free_arr_float(float *arr)
{
    free(arr);
    arr = NULL;
}
