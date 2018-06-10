/*
** EPITECH PROJECT, 2017
** pustr
** File description:
** sentence
*/

#include "my.h"

int	my_putstr(char *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i++;
	}
	return (i);
}
