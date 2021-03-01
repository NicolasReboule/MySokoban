/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** Contains the prototypes of all the functions in my library
*/

#ifndef MY_H_
#define MY_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ncurses.h"

void displayw_arr(char **arr);
void can_i_print_map(char **map);
void get_map_length(char **map, int *x, int *y);
int end(int nb);
void lose(int nb);
int get_nb_boxes(char **map);
char **check_lose(char **map);
char **compare_maps(char **map, char *filepath);
char **move_boxes_left(char **map);
char **move_boxes_right(char **map);
char **move_boxes_down(char **map);
char **move_boxes_up(char **map);
char **move_right(char **map);
char **move_left(char **map);
char **move_down(char **map);
char **move_up(char **map);
void get_player_pos(char **map, int *x, int *y);
char **get_map(char *filepath);
char **map_to_arr(char *str);
void check_map(char *filepath);
void my_sokoban(char *map);

void frieza(char *format, ...);
void free_arr_int(int *arr);
void free_arr_float(float *arr);
void free_arr_char(char **arr);
void free_str(char *str);
char **my_arrdup_except(char **arr, char *str);
char **my_arrdup_more(char **arr, int size);
char **my_arrdup(char **arr);
char **split(char *str, char c);
char *my_strcut(char *str, char c);
int len_to_char(char *str, char c);
char *my_revcut(char *str, char c);
char *my_strndup(char *str, int n);
void display_arr(char **arr);
int str_compare(char *str1, char *str2);
char *append_percent(char *res);
char *append_str(char *str, char *res);
char *append_char(char c, char *res);
char *append_nbr(int nb, char *res);
char *append(char *format, ...);
int get_len_append(char *str);
char *get_str_append(char *str);
char *int_to_char(int nb);
int my_arrlen(char **arr);
char **my_str_to_word_arr(char *str);
char *my_strdup(const char *str);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_isneg(int n);
int my_put_nbr(long long int nb);
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
int my_printf(char *format, ...);
int my_put_float(float nb);
int my_put_oct(long long int nb);
int my_put_unprintable(char *str);
int my_put_hex_lowcase(long long int nb);
int my_put_hex_uppercase(long long int nb);
int my_put_binary(long long int nb);
int negativ_or_null(long long int nb);
void my_print_long(va_list list, int *nb, char **format);

#endif