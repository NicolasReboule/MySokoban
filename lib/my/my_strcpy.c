/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** Copies a string into another
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while ( src[i] != '\0') {
        dest[i] = src[i];
        i = i + 1;
    }
    return (dest);
}