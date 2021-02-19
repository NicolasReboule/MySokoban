/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-nicolas.reboule
** File description:
** map
*/

#include "my.h"

char **map_to_arr(char *str)
{
    int n = 0;
    char **res;
    int i = 0;
    for (; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            n++;
    }
    res = malloc(sizeof(char *) * (n + 1));
    for (n = 0; str[n] != '\n'; n++);
    for (i = 0, n++; my_strndup(str, n) !=  NULL; i++) {
        for (n = 0; str[n] != '\n'; n++);
        n++;
        res[i] = my_strndup(str, n);
        str += n;
    }
    res[i] = NULL;
    return (res);
}

char **get_map(char *filepath)
{
    int fd = 0;
    struct stat stats;
    char *buffer = "";
    char **map;

    fd = open(filepath, O_RDONLY);
    stat(filepath, &stats);
    buffer = malloc(sizeof(char) * (stats.st_size + 1));
    read(fd, buffer, stats.st_size);
    close(fd);
    map = map_to_arr(buffer);
    return (map);
}