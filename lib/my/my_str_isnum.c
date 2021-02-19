/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** Returns if the string passed as parameters only contains digits or not
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}
