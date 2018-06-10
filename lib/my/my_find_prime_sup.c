/*
** EPITECH PROJECT, 2017
** find
** File description:
** prime
*/

#include "my.h"

int     my_search(int nb)
{
	int     i = 2;

	if (nb == 2)
		return (1);
	if (nb == 1)
		return (0);
	if (nb < 1)
		return (0);
	while (i < nb) {
		if ((nb % i) == 0)
			return (0);
		i += 1;
	}
	return (1);
}

int	my_find_prime_sup(int nb)
{
	while (my_search(nb) != 1)
		nb++;
	return (nb);
}
