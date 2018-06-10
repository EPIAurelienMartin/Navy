/*
** EPITECH PROJECT, 2017
** str
** File description:
** lowcase
*/

#include "my.h"

char	*my_strlowcase(char *str)
{
	int	i = 0;

	while (str[i]) {
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
		i++;
	}
	return (str);
}
