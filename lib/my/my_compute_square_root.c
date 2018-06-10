/*
** EPITECH PROJECT, 2017
** square
** File description:
** root
*/

#include "my.h"

int	my_power(int nb, int p)
{
	int   res;

	if (p < 0)
		return (0);
	if (p == 0)
		return (1);
	res = my_power(nb, p - 1);
	if (nb > 0 && res > 2147483647 / nb)
		return (0);
	if (nb < 0 && res > -2147483648 / nb)
		return (0);
	res = nb * res;
	return (res);
}

int	my_compute_square_root(int nb)
{
	int	i = 0;

	if (nb == 1)
		return (1);
	while (i <= nb / 2) {
		if (my_power(i, 2) == nb)
			return (i);
		i++;
	}
	return (0);
}
