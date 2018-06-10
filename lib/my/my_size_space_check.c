/*
** EPITECH PROJECT, 2017
** check
** File description:
** sizeandother
*/

#include "my.h"

int     my_char_isnum(char str)
{
	if (str > '9' || str < '0')
		return (1);
	return (0);
}

int     disp_space(int space)
{
	int     res = 0;

	while (space != 0) {
		res += my_putchar(' ');
		space -= 1;
	}
	return (res);
}

int     check_size_cp(int *i, va_list arg, const char *format)
{
	int		res = 0;
	va_list		cop;
	int		octal = 0;

	va_copy(cop, arg);
	if (format[*i] == 'o') {
		octal = decimal_base(va_arg(cop, int), 8);
		res += my_nb_len(octal + 1);
		va_end(cop);
		return (res);
	}
	if (format[*i] == 'c')
		res = 1;
	else if (format[*i] == 's' || format[*i] == 'S')
		res = my_strlen(va_arg(cop, char *));
	else
		res = my_nb_len(va_arg(cop, int) + 1);
	va_end(cop);
	return (res);
}

int     my_for_space(int space, int *i, const char *format)
{
	for (*i = *i; format[*i] == ' '; *i += 1) {
		my_putchar(' ');
		space -= 1;
	}
	return (space);
}
