/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** Compares n characters of two strings
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int g;
    int diff;
    int vraidiff = 0;

    while (i < n) {
        diff = s1[i] - s2[i];
        i = i + 1;
        vraidiff = vraidiff + diff;
    }
    if (vraidiff == 0) {
        g = 0;
    }
    if (vraidiff > 0) {
        g = 1;
    }
    if (vraidiff < 0) {
        g = -1;
    }
    return (g);
}
