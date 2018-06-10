/*
** EPITECH PROJECT, 2017
** nbr
** File description:
** base
*/

#include "my.h"

int	my_check_error_base(char const *base)
{
	int	i = 0;

	while (base[i]) {
		if (base[i] == '-' || base[i] == '+')
			return (-1);
		i++;
	}
	return (0);
}

int	my_getnbr_base(char const *str, char const *base)
{
	int	size = my_strlen(str) - 1;
	int	multiplier = 1;
	int	j = 1;
	int	i = 0;
	int	res = 0;

	if (my_check_error_base(base) == -1)
		return (0);
	while ((str[i] == '+' || str[i] == '-') && str[i]) {
		if (str[i] == '-')
			j *= -1;
		i++;
	}
	while (size >= 0) {
		for (i = 0; base[i] != str[size]; i++);
		res += i * multiplier;
		multiplier *= my_strlen(base);
		size--;
	}
	return (res * j);
}
