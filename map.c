/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-nicolas.reboule
** File description:
** map
*/

#include "my.h"

char **map_lose(char **map, int nb)
{
    if (nb <= 0) {
        if (!str_compare(map[my_arrlen(map)], "win"))
            map = my_arrdup_more(map, 1);
        map[my_arrlen(map)] = my_strdup("lose");
    }
    return (map);
}

char **map_win(char **map)
{
    map = my_arrdup_more(map, 1);
    map[my_arrlen(map)] = my_strdup("win");
    return (map);
}

char **compare_maps(char **map, char *filepath)
{
    char **ori = get_map(filepath);
    int i = 0;
    int j = 0;
    int nb_places = 0;

    for (; ori[j]; j++) {
        for (i = 0; ori[j][i]; i++) {
            (ori[j][i] == 'O') ? nb_places++ : 0;
        }
    }
    for (j = 0; map[j]; j++) {
        for (i = 0; map[j][i]; i++) {
            if (map[j][i] != ori[j][i]) {
                (map[j][i] == ' ' && ori[j][i] == 'O') ? map[j][i] = 'O': 0;
                (map[j][i] == 'X' && ori[j][i] == 'O') ? nb_places-- : 0;
            }
        }
    }
    map = (nb_places == 0) ? map_win(map) : map;
    return (map);
}

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