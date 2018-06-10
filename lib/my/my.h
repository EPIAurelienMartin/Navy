/*
** EPITECH PROJECT, 2017
** my
** File description:
** h
*/

#ifndef _MY_H_
# define _MY_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <time.h>

int     send_p(va_list arg, int (**print)());
int     modulol(long unsigned int nbr, char *base);
int     decimal_base(int nb, int base);
int     base_decimal(char *str, int base);
int     my_showstr(char const *str);
int     my_putchar(int c);
int     my_putstr(char *str);
int     my_strlen(char const *str);
int     my_len(char *str);
int     my_put_nbr(int nb);
int     my_putnbr_base(int nb, char const *base);
int     my_putnbru_base(unsigned int nb, char const *base);
int     my_put_nbr_unsigned(unsigned int nb);
int     my_put_nbr_bin(int nb);
int     my_put_nbr_hexam(unsigned int nb);
int     my_put_nbr_hexa(unsigned int nb);
int     my_put_nbr_hexap(long nb, char *base);
int     my_put_nbr_octal(int nb);
int     my_printf(const char *format, ...);
int     my_loop(int *i, va_list arg, int (**print)(), const char *format);
int     my_getnbr(char const *str, int *i);
int     my_char_isnum(char str);
void    init_ptr(int (**print)());
int     my_nb_len(int nb);
int     my_other(int *i, va_list arg, int (**print)(), const char *format);
int     my_getnb(char const *str);
int     next_flag(int *i, char const *format);
int     my_foward(char car);
int     is_flag(char car);
int     my_sign_neg(int *i, va_list arg, int (**print)(), const char *format);
int     my_sign_pos(int *i, int nb, const char *format);
int     my_sign_nb(int *i, va_list arg, int (**print)(), const char *format);
int     my_sign(int *i, va_list arg, int (**print)(), const char *format);
int     my_handle_sign(int *i, va_list arg, int (**print)(), const char *forma);
int     my_for_space(int space, int *i, const char *format);
int     check_size_cp(int *i, va_list arg, const char *format);
int     disp_space(int space);
int     my_char_isnum(char str);

int	count_for_malloc(int ac, char **av);
char	*concat_params(int argc, char **argv);
int	my_compute_factorial_it(int nb);
int	my_compute_factorial_rec(int nb);
int	my_compute_power_it(int nb, int p);
int	my_compute_power_rec(int nb, int p);
int	my_compute_square_root(int nb);
int	my_power(int nb, int p);
char	*my_evil_str(char *str);
int	my_find_prime_sup(int nb);
int	my_search(int nb);
int	limite_sale(char const *str, int i, int signe);
int	my_signe(char const *str);
int	is_num(char a);
int	my_is_prime(int nb);
int	my_isneg(int n);
void	display(int a, int b , int c);
void	my_print_comb(void);
void	display_comb2(char a, char b, char c, char d);
void	wyle_nor(char a, char b, char c, char d);
int	my_print_comb2(void);
int	my_print_digits(void);
int	my_print_revalpha(void);
int	nb_is_neg(int nb);
char	*my_revstr(char *str);
int	my_show_word_array(char * const * tab);
int	my_showmem(char const *str, int size);
void	my_sort_int_array(int *array, int size);
int	my_str_isalpha(char const *str);
int	my_str_islower(char const *str);
int	my_str_isnum(char const *str);
int	my_str_isprintable(char const *str);
int	my_delim(char str, char *lim);
int	my_str_isupper(char const *str);
char	**my_str_to_word_array(char *str, char *lim);
int	word_size(char *str, int i, char *lim);
int	count_word(char const *str, char *lim);
char	*my_strcapitalize(char *str);
int	my_isalpha(char c);
int	is_digit(char c);
char	*my_strcat(char *dest, char const *src);
int	my_strcmp(char const *s1, char const *s2);
char	*my_strcpy(char *dest, char const *src);
char	*my_strdup(char const *src);
int	my_strlen(char const *str);
char	*my_strlowcase(char *str);
char	*my_strncat(char *dest, char const *src, int nb);
int	my_strncmp(char const *s1, char const *s2, int n);
char	*my_strncpy(char *dest, char const *src, int n);
char	*my_strstr(char *str, char const *to_find);
int	my_find_next(char const *str, char const *to_find);
char	*my_strupcase(char *str);
int	my_swap(int *a, int *b);
int	my_printf_alpha(void);
int	my_getnbr_base(char const *str, char const *base);
char	*open_my_file(char *name);

#endif /* _MY_H_ */
