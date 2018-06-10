/*
** EPITECH PROJECT, 2017
** nbr
** File description:
** put
*/

#include "my.h"

int	nb_is_neg(int nb)
{
	if (nb == -2147483648) {
		my_putchar('-');
		my_putchar('2');
		nb = 147483648;
		return (nb);
	}
	if (nb < 0) {
		my_putchar('-');
		nb = -nb;
	}
	return (nb);
}

int     my_put_nbr(int nb)
{
	int i = 0;

	if (nb < 0)
		nb = nb_is_neg(nb);
	if (nb >= 10) {
		i += my_put_nbr(nb / 10);
		i +=  my_putchar(48 + nb % 10);
	}
	else
		i += my_putchar(48 + nb);
	return (i);
}
