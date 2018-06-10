/*
** EPITECH PROJECT, 2017
** put
** File description:
** char
*/

#include "my.h"

int	my_putchar(int c)
{
	write(1 , &c, 1);
	return (1);
}
