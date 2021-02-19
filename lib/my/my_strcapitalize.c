/*
** EPITECH PROJECT, 2020
** my_strcapitalize
** File description:
** Transforms the first character of each word in a capital letter
*/

char *my_strcapitalize(char *str)
{
    int i = 0;

    if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    while (str[i] != '\0') {
        if ( str[i] == ' ' || str[i] == '-' || str[i] == '+') {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z') {
            str[i + 1] = str[i + 1] - 32;
            }
        }
        i = i + 1;
    }
    return (str);
}
