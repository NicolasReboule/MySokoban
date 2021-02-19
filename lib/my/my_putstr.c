/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** Display a given string
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int o = 0;

    while (str[o] != '\0') {
        my_putchar(str[o]);
        o = o + 1;
    }
    return (o);
}
