/*
** EPITECH PROJECT, 2017
** print
** File description:
** comb
*/

#include "my.h"

void	display(int a, int b , int c)
{
	if (a == '7') {
		c = '9';
		my_putchar(a);
		my_putchar(b);
		my_putchar(c);
	}
	if (a != '7') {
		my_putchar(a);
		my_putchar(b);
		my_putchar(c);
		my_putchar(',');
		my_putchar(' ');
	}
}

void	my_print_comb(void)
{
	int	a = '0';
	int	b = '1';
	int	c = '2';

	display(a, b, c);
	while (a < '7' && b <= '8' && c <= '9') {
		c++;
		display(a, b, c);
		if (c == '9') {
			b++;
			c = b + 1;
			display(a, b, c);
		}
		if (b == '8') {
			a++;
			b = a + 1;
			c = b + 1;
			display(a, b, c);
		}
	}
}
