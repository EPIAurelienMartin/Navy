/*
** EPITECH PROJECT, 2017
** len
** File description:
** nb
*/


#include "my.h"

int     nbr_is_neg(int nb)
{
	if (nb == -2147483648) {
		nb = 147483648;
		return (nb);
	}
	if (nb < 0)
		nb = -nb;
	return (nb);
}

int     len_neg(int nb)
{
	if (nb == -2147483648)
		return (2);
	if (nb < 0)
		return (1);
	return (nb);
}

int     my_nb_len(int nb)
{
	int i = 0;

	if (nb == 0)
		return (i);
	if (nb < 0) {
		i += len_neg(nb);
		nb = nbr_is_neg(nb);
	}
	if (nb >= 10) {
		i += my_nb_len(nb / 10);
		i += 1;
	} else
		i += 1;
	return (i);
}
