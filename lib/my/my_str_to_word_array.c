/*
** EPITECH PROJECT, 2021
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

char *clean_str(char *str)
{
    int i = 0;
    char *fakestr = my_strdup(str);
    while (str[0] == ' ' || str[0] == '\t')
        str++;
    while (str[i] != '\0') {
        if (str[i] == '\t')
            str[i] = ' ';
        if (str[i] == ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0' ||
            str[i + 1] == '\t' || str[i + 1] == '\n'))
            str++;
        else {
            fakestr[i] = str[i];
            i++;
        }
    }
    fakestr[i] = '\0';
    return (fakestr);
}

char **get_words(char *str, char **arr)
{
    int i = 0;
    int j = 0;
    int word = 0;

    for (; str[i] != '\0'; i++, j++) {
        if (str[i] == ' ') {
            arr[word][j + 1] = '\0';
            word++;
            j = 0;
            i++;
        }
        arr[word][j] = str[i];
    }
    arr[word + 1] = NULL;
    return (arr);
}

char **get_words_length(char *str, char **arr)
{
    int i = 0;
    int wordslen = 0;
    int word = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            arr[word] = malloc(sizeof(char) * wordslen + 1);
            wordslen = -1;
            word++;
        }
        i++;
        wordslen++;
    }
    arr[word] = malloc(sizeof(char) * wordslen + 1);
    return (arr);
}

int get_number_of_words(char *str)
{
    int i = 0;
    int spacecount = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ')
            spacecount++;
        i++;
    }
    return (spacecount + 1);
}

char **my_str_to_word_arr(char *str)
{
    int nbwords;
    char **arr;
    str = clean_str(str);
    nbwords = get_number_of_words(str);
    arr = malloc(sizeof(char *) * (nbwords + 1));
    arr = get_words_length(str, arr);
    arr = get_words(str, arr);
    return (arr);
}