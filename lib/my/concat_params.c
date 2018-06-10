/*
** EPITECH PROJECT, 2017
** concat
** File description:
** params
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int	count_for_malloc(int ac, char **av)
{
	int	count = 0;
	int	res = 0;

	while (ac > count) {
		res += my_strlen(av[count]);
		count++;
	}
	return (res + 1);
}

char	*concat_params(int argc, char **argv)
{
	char	*dest;
	int	count = count_for_malloc(argc, argv);
	int	i = 1;

	dest = malloc(sizeof(char) * count);
	dest = strcpy(dest, argv[0]);
	while (i != argc) {
		dest = strcat(dest, " ");
		dest = strcat(dest, argv[i]);
		i++;
	}
	return (dest);
}
