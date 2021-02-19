/*
** EPITECH PROJECT, 2021
** len_to_char
** File description:
** len_to_char
*/

int len_to_char(char *str, char c)
{
    int i = 0;
    while (str[i] != c)
        i++;
    return (i);
}