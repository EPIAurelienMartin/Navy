/*
** EPITECH PROJECT, 2018
** check_my_file.c
** File description:
** ..
*/

#include "my.h"
#include "navy.h"

int	check_my_file(char *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		if ((str[i] >= '1' && str[i] <= '8') || str[i] == '\n'
		|| (str[i] >= 'A' && str[i] <= 'H') || str[i] == ':')
				i++;
		else
			return (84);
	}
	return (0);
}

int	check_map(char *str)
{
	int	error = 0;
	int	i = 0;
	int	nb = '2';

	for (i = 0; (i < 25); i += 8) {
		str[i] != nb ? error++ : 0;
		nb++;
	}
	for (i = 1; (i < 26 ); i += 8)
		str[i] != ':' ? error++ : 0;
	for (i = 4; (i < 29 ); i += 8)
		str[i] != ':' ? error++ : 0;
	for (i = 7; (i < 26 ); i += 8)
		str[i] != '\n' ? error++ : 0;
	for (i = 2; (i < 27 ); i += 8)
		str[i] < 'A' || str[i] > 'H' ? error++ : 0;
	for (i = 3; (i < 28 ); i += 8)
		str[i] < '1' || str[i] > '8' ? error++ : 0;
	for (i = 6; (i < 31 ); i += 8)
		str[i] < '1' || str[i] > '8' ? error++ : 0;
	return (error);
}
