/*
** EPITECH PROJECT, 2017
** comb
** File description:
** second
*/

#include "my.h"

void    display_comb2(char a, char b, char c, char d)
{
	if (a < c) {
		my_putchar(a);
		my_putchar(b);
		my_putchar(' ');
		my_putchar(c);
		my_putchar(d);
		my_putchar(',');
		my_putchar(' ');
	}
	if (a == c && b < d) {
		my_putchar(a);
		my_putchar(b);
		my_putchar(' ');
		my_putchar(c);
		my_putchar(d);
		if (a != '9' || b != '8') {
			my_putchar(',');
			my_putchar(' ');
		}
	}
}

void	wyle_nor(char a, char b, char c, char d)
{
	while (c <= '9') {
		while (d <= '9')
			display_comb2(a, b, c, d++);
		d = '0';
		c += 1;
	}
}

int     my_print_comb2(void)
{
	char  a = '0';
	char  b = '0';
	char  c = '0';
	char  d = '1';

	while (a <= '9') {
		while (b <= '9') {
			wyle_nor(a, b, c, d);
			c = '0';
			b += 1;
		}
		b = '0';
		a += 1;
	}
	return (0);
}
