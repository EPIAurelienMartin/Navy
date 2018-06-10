/*
** EPITECH PROJECT, 2017
** printf
** File description:
** printf
*/

#include "my.h"

void	init_ptr(int (**print)())
{
	print[0] = my_putchar;
	print[1] = my_put_nbr;
	print[2] = my_put_nbr;
	print[3] = my_putstr;
	print[4] = my_put_nbr_octal;
	print[5] = my_put_nbr_hexap;
	print[6] = my_put_nbr_unsigned;
	print[7] = my_put_nbr_hexa;
	print[8] = my_put_nbr_hexam;
	print[9] = my_put_nbr_bin;
	print[10] = my_showstr;
}

int	my_diese(int *i, va_list arg, int (**print)(), const char *format)
{
	int	res = 0;

	*i += 1;
	if (format[*i] == 'o')
		res += my_putchar('0');
	if (format[*i] == 'x')
		res += my_putstr("0x");
	if (format[*i] == 'X')
		res += my_putstr("0X");
	res += my_loop(i, arg, print, format);
	return (res);
}

int	my_other(int *i, va_list arg, int (**print)(), const char *format)
{
	int	res = 0;
	int	j = 0;
	char	*search = "cidsopuxXbS";

	if (format[*i] == '#')
		res += my_diese(i, arg, print, format);
	for (j = 0; (format[*i] != search[j] && search[j]); j++);
	if (j == 11) {
		if (format[*i] == '-' || format[*i] == '+' || \
			my_char_isnum(format[*i]) == 0)
			res += my_handle_sign(i, arg, print, format);
		else if (format[*i] == ' ')
			res += my_handle_sign(i, arg, print, format);
		else {
			res += my_putchar('%');
			res += my_putchar(format[*i]);
		}
	}
	return (res);
}
int	my_loop(int *i, va_list arg, int (**print)(), const char *form)
{
	char	*s = "cidsopuxXbS";
	int	res = 0;
	int	j = 0;
	char	*hexa = "0123456789abcdef";

	for (j = 0; (form[*i] != s[j] && s[j]); j++);
	if (form[*i] == s[j] || (form[*i] == 'l' && form[*i + 1] == 'x')) {
		if (form[*i] == 'p')
			res += send_p(arg, print);
		else if (form[*i] == 'l' && form[*i + 1] == 'x') {
			res += modulol((long unsigned)va_arg(arg, int *), hexa);
			*i += 1;
		} else
			res += (*print[j])(va_arg(arg, int *));
	}
	else if (form[*i] == '%')
		res += my_putchar('%');
	else
		res += my_other(i, arg, print, form);
	return (res);
}

int	my_printf(const char *format, ...)
{
	int		i = 0;
	va_list	arg;
	int		(*print[11])();
	int	res = 0;

	init_ptr(print);
	va_start(arg, format);
	for (i = 0; (format[i]); i++) {
		if (format[i] == '%' && format[i + 1] != '\0') {
			i++;
			res += my_loop(&i, arg, print, format);
		}
		else
			res += my_putchar(format[i]);
	}
	return (res);
}
