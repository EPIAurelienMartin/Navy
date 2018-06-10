/*
** EPITECH PROJECT, 2017
** power
** File description:
** it
*/

#include "my.h"

int	my_compute_power_it(int nb, int p)
{
	int   res = nb;

	if (p < 0)
		return (0);
	if (p == 0)
		return (1);
	while (p != 1) {
		if (nb < 0 && res > -2147483648 / nb)
			return (0);
		if (nb > 0 && res > 2147483647 / nb)
			return (0);
		res *= nb;
		p -= 1;
	}
	return (res);
}
