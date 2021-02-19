/*
** EPITECH PROJECT, 2020
** my_compute_power
** File description:
** Calclutates powers
*/

void my_putchar(char c);

int power(int number);

int my_put_nbr(int nb);

int my_compute_power_rec(int nb, int p)
{
    int result;

    if (nb == 0) {
    return (0);
    }
    if (p > 0) {
    result = nb * my_compute_power_rec(nb, p);
    }
    if (p < 0) {
    return (0);
    }
    if ( p == 0) {
    return (1);
    }
}
