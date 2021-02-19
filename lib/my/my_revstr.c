/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** Reverses a string
*/

int my_strlen(char const *str);

char *my_evil_str(char *str)
{
    int n = 0;
    int stock;
    int x = my_strlen(str) - 1;

    while ( n < x) {
        stock = str[n];
        str[n] = str[x];
        str[x] = stock;
        n = n + 1;
        x = x - 1;
    }
    return (str);
}

char *my_revstr(char *str)
{
    my_strlen(str);
    my_evil_str(str);
    return (str);
}
