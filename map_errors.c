/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-nicolas.reboule
** File description:
** map_errors
*/


#include "my.h"

void get_map_length(char **map, int *x, int *y)
{
    int o = 0;

    for (; map[*y]; (*y)++) {
        for (; map[*y][*x]; (*x)++);
        o = (o < *x) ? *x : o;
    }
}

void check_borders(char **arr)
{
    int len = my_arrlen(arr);
    int i = 0;
    for (; arr[0][i] != '\n'; i++) {
        if (arr[0][i] != '#') {
            write(2, "There is a hole in the map's border\n", 37);
            exit(84);
        }
    }
    for (i = 1; i != len - 1; i++) {
        if (arr[i][0] != '#' || arr[i][my_strlen(arr[i]) - 2] != '#') {
            write(2, "There is a hole in the map's border\n", 37);
            exit(84);
        }
    }
    for (i = 0; arr[len - 1][i] != '\n'; i++) {
        if (arr[len - 1][i] != '#') {
            write(2, "There is a hole in the map's border\n", 37);
            exit(84);
        }
    }
}

void check_map_content_loop(char *str, int *p, int *o, int *x)
{
    int i = 0;

    for (; str[i];) {
        if (str[i] == 'P' || str[i] == 'X' || str[i] == 'O' ||
        str[i] == '#' || str[i] == '\n' || str[i] == ' ')
            i++;
        else {
            write(2, "Invalid map file content\n", 26);
            exit(84);
        }
        if (str[i] == 'X')
            (*x)++;
        if (str[i] == 'O')
            (*o)++;
        if (str[i] == 'P')
            (*p)++;
    }
}

void check_map_content(char *str)
{
    int p = 0;
    int o = 0;
    int x = 0;

    check_map_content_loop(str, &p, &o, &x);
    if (p != 1) {
        write(2, "There should be one and only one player\n", 41);
        exit(84);
    }
    if (o == 0 || x == 0) {
        write(2, "There should be at least one box and/or emplacement\n", 53);
        exit(84);
    }
    if (o != x) {
        write(2, "Number of boxes and emplacements does not match\n", 47);
        exit(84);
    }
}

void check_map(char *filepath)
{
    int fd = 0;
    struct stat stats;
    char *buffer = "";
    fd = open(filepath, O_RDONLY);
    if (fd < 0) {
        write (2, "Cannot open map file\n", 22);
        exit(84);
    }
    if (stat(filepath, &stats) < 0) {
        write(2, "Invalid stat return\n", 21);
        exit(84);
    }
    buffer = malloc(sizeof(char) * (stats.st_size + 1));
    if (read(fd, buffer, stats.st_size) < 0) {
        write(2, "Invalid read return\n", 21);
        exit(84);
    }
    close(fd);
    check_map_content(buffer);
    frieza("%s", buffer);
}
