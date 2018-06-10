/*
** EPITECH PROJECT, 2017
** str
** File description:
** isnum
*/

#include "my.h"

int	my_str_isnum(char const *str)
{
	int	i = 0;

	if (str[0] == '\0')
		return (1);
	while (str[i]) {
		if (str[i] > '9' || str[i] < '0')
			return (0);
		i++;
	}
	return (1);
}
