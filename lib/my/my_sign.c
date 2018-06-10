/*
** EPITECH PROJECT, 2017
** sign
** File description:
** sign
*/

#include "my.h"

int     my_sign_neg(int *i, va_list arg, int (**print)(), const char *format)
{
	int     res = 0;
	int     space = 0;
	int     less = 0;

	space = my_for_space(space, i, format);
	res += space * -1;
	*i += 1;
	if (my_char_isnum(format[*i]) == 0)
		space = my_getnbr(format, i);
	less = check_size_cp(i, arg, format);
	if (format[*i] == '+')
		space -= 1;
	res += my_loop(i, arg, print, format);
	if (space - less > 0 && next_flag(i, format) == 0)
		res += disp_space(space - less);
	return (res);
}

int     my_sign_pos(int *i, int nb, const char *format)
{
	int     res = 0;
	int     space = 0;

	space = my_for_space(space, i, format);
	res += space * -1;
	*i += 1;
	if (nb >= 0)
		res += my_putchar('+');
	res += my_put_nbr(nb);
	return (res);
}

int     my_sign_nb(int *i, va_list arg, int (**print)(), const char *format)
{
	int     space = my_for_space((space = 0), i, format);
	int     res = space * -1;
	int     less = 0;

	if (format[*i] == '0') {
		*i += 1;
		res += my_loop(i, arg, print, format);
	}
	else if (my_char_isnum(format[*i]) == 0 && next_flag(i, format) == 0) {
		space += my_getnbr(format, i);
		less = check_size_cp(i, arg, format);
		res += disp_space(space - less);
		res += my_loop(i, arg, print, format);
	} else {
		my_getnbr(format, i);
		res += my_loop(i, arg, print, format);
	}
	return (res);
}

int     my_sign(int *i, va_list arg, int (**print)(), const char *format)
{
	int     res = 0;
	int     j = *i;

	for (j = *i; format[j] == ' '; j += 1);
	if (format[j] == '-')
		res += my_sign_neg(i, arg, print, format);
	if (format[j] == '+')
		res += my_sign_pos(i, va_arg(arg, int), format);
	return (res);
}

int     my_handle_sign(int *i, va_list arg, int (**print)(), const char *format)
{
	int     res = 0;
	int     j = *i;

	for (j = *i; format[j] == ' '; j += 1);
	if (format[j] == '-' || format[j] == '+')
		res += my_sign(i, arg, print, format);
	else if (my_char_isnum(format[j]) == 0) {
		res += my_sign_nb(i, arg, print, format);
	} else {
		for (*i = *i; format[*i] == ' '; *i += 1)
			res += my_putchar(' ');
		res += my_loop(i, arg, print, format);
	}
	return (res);
}
