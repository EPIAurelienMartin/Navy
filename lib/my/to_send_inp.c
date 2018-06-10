/*
** EPITECH PROJECT, 2017
** send
** File description:
** inp
*/

#include "my.h"

int	send_p(va_list arg, int (**print)())
{
	int	res = 0;

	res += my_putstr("0x");
	res += (*print[5])((long)va_arg(arg, int *), "0123456789abcdef");
	return (res);
}
