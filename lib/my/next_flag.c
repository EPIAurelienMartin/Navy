/*
** EPITECH PROJECT, 2017
** next
** File description:
** flag
*/

#include "my.h"

int     is_flag(char car)
{
	char    *search = "cidsopuxXbS";
	int     i = 0;

	while (search[i] && search[i] != car)
		i++;
	if (i == 11)
		return (-1);
	else
		return (0);
}

int     my_foward(char car)
{
	int     i = 0;
	char    *foward = " 0123456789-+";

	for (i = 0; foward[i] && foward[i] != car; i++);
	if (i == 13)
		return (-1);
	else
		return (0);
}

int     next_flag(int *i, char const *format)
{
	int     cpt = *i;

	for (cpt = cpt; my_foward(format[cpt]) == 0 && format[cpt]; cpt++);
	if (is_flag(format[cpt]) == 0)
		return (0);
	else
		return (-1);
}
