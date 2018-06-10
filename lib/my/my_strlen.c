/*
** EPITECH PROJECT, 2017
** str
** File description:
** len
*/

#include "my.h"

int	my_len(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

int	my_strlen(char const *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
