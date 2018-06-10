/*
** EPITECH PROJECT, 2017
** fact
** File description:
** it
*/

#include "my.h"

int	my_compute_factorial_it(int nb)
{
	int	res = nb;

	if (nb == 0)
		return (1);
	else if (nb > 0 && nb < 13) {
		while (nb != 1) {
			nb -= 1;
			res *= nb;
		}
		return (res);
	}
	else
		return (0);
}
