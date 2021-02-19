/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** Compares two strings
*/

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int i;
    int n1 = my_strlen(s1);
    int n2 = my_strlen(s2);

    if (n1 == n2) {
        i = 0;
    }
    if (n1 > n2) {
        i = 1;
    }
    if (n1 < n2) {
        i = -1;
    }
    return (i);
}
