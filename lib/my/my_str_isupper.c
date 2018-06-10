/*
** EPITECH PROJECT, 2017
** is
** File description:
** upper
*/

#include "my.h"

int	my_str_isupper(char const *str)
{
	int     i = 0;

	if (str[0] == '\0')
		return (1);
	while (str[i]) {
		if (str[i] > 'Z' || str[i] < 'A')
			return (0);
		i++;
	}
	return (1);
}
