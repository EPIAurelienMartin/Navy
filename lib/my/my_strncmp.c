/*
** EPITECH PROJECT, 2017
** str
** File description:
** ncmp
*/

#include "my.h"

int	my_strncmp(char const *s1, char const *s2, int n)
{
	int   i = 0;

	while (s1[i] == s2[i] && s1[i] && s2[i] && i + 1 < n)
		i++;
	return (s1[i] - s2[i]);
}
