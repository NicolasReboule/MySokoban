/*
** EPITECH PROJECT, 2020
** my_isneg.sh
** File description:
** Display P if a number is positove or null and N if it's negative
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0)
    {
        my_putchar('P');
    }
    else
    {
        my_putchar('N');
    }
    my_putchar('\n');
    return (0);
}
