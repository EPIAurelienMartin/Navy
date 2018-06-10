/*
** EPITECH PROJECT, 2017
** get
** File description:
** nbr
*/

#include "my.h"

int	is_num(char a)
{
	if (a < '0' || a > '9')
		return (0);
	else
		return (1);
}

int	my_check(char const *str)
{
	int	i = 0;

	while (str[i] == '-' || str[i] == '+') {
		i++;
	}
	return (i);
}

int	my_signe(char const *str)
{
	int	i = 0;
	int	j = 0;

	while (str[i] == '-' || str[i] == '+') {
		if (str[i] == '-')
			j++;
		i += 1;
	}
	return (j);
}

int	limite_sale(char const *str, int i, int signe)
{
	if (str[i] == 56 && signe % 2 == 1)
		return (-2147483648);
	return (0);
}

int	my_getnb(char const *str)
{
	int	res = 0;
	int	i = 0;
	int	j = 0;
	int	signe = 0;

	i = my_check(str);
	signe = my_signe(str);
	while (is_num(str[i]) == 1 && str[i] != '\0') {
		if (res >= 214748364 && str[i] > 55 && j == 0) {
			return (limite_sale(str, i, signe));
		}
		res *= 10;
		res += str[i] - 48;
		i += 1;
	}
	if (signe % 2 == 1)
		res *= -1;
	return (res);
}
