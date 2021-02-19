/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** Copies n characters in a string
*/

int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    if (src[n] < my_strlen(src)) {
        while (src[i] != src[n]) {
            dest[i] = src[i];
            i = i + 1;
        }
    }
    if (src[n] > my_strlen(src)) {
        while (src[i] != src[n]) {
            dest[i] = src[i];
            i = i + 1;
        }
        dest[i] = '\0';
    }
        return (dest);
}
