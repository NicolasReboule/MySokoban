/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** Find the first occurence of a string
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if (str[i] != to_find[j]) {
            i = i + 1;
        }
        else {
            j = j + 1;
            i = i + 1;
        }
        if (to_find[j] == '\0') {
            return (&str[i - j]);
        }
    }
}
