/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** put a number
*/

void my_putchar(char c);

long long int negativ_or_null(long long int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb == 0)
        my_putchar('0');
    return (nb);
}

int my_put_nbr(long long int nb)
{
    long long int i = 1;
    int n = 0;

    if (nb < 0 || nb == 0)
        nb = negativ_or_null(nb);
    while (i <= nb) {
        i = i * 10;
    }
    i = i / 10;
    while (i != 0) {
        my_putchar(nb / i + 48);
        nb = nb % i;
        i = i / 10;
        n++;
    }
    return (n);
}