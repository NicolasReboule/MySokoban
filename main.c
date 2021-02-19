/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-nicolas.reboule
** File description:
** main
*/

#include "my.h"

void usage(void)
{
    my_printf("USAGE\n\t./my_sokoban map\n");
    my_printf("DESCRIPTION\n\tmap\tfile representating the warehouse map, ");
    my_printf("containing '#' for walls,\n\t\t'P' for the player, 'X'");
    my_printf("for the boxes and '0' for  storage locations.\n");
}

int main(int ac, char **av)
{
    if (ac != 2) {
        write(2, "Invalid number of arguments\n", 29);
        return (84);
    }
    if (ac == 2 && str_compare(av[1], "-h")) {
        usage();
        return (0);
    }
    my_sokoban(av[1]);
}