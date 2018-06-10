##
## EPITECH PROJECT, 2017
## makefile
## File description:
## make
##

CC	=	gcc

RM	=	rm -rf

CFLAGS	+=	-Wextra -Wall

CFLAGS	+=	-I ./include/

NAME	=	libmy.a

SRCS	=	concat_params.c			\
		my_getnbr.c			\
		my_putchar.c			\
		my_speciale_putnbr.c		\
		my_strlowcase.c			\
		convert_base.c			\
		my_putnbr_base.c		\
		my_strcapitalize.c		\
		my_strncat.c			\
		my_isneg.c			\
		my_put_nbr.c			\
		my_strcat.c			\
		my_strncmp.c			\
		my_compute_factorial_it.c	\
		my_is_prime.c			\
		my_put_nbr_unsigned.c		\
		my_strcmp.c			\
		my_strncpy.c			\
		my_compute_factorial_rec.c	\
		my_modu_l.c			\
		my_putstr.c			\
		my_strcpy.c			\
		my_strstr.c			\
		my_compute_power_it.c		\
		my_nb_len.c			\
		my_revstr.c			\
		my_strdup.c			\
		my_str_to_word_array.c		\
		my_compute_power_rec.c		\
		my_print_alpha.c		\
		my_showmem.c			\
		my_str_isalpha.c		\
		my_strupcase.c			\
		my_compute_square_root.c	\
		my_print_comb2.c		\
		my_showstr.c			\
		my_str_islower.c		\
		my_swap.c			\
		my_evil_str.c			\
		my_print_comb.c			\
		my_show_word_array.c		\
		my_str_isnum.c			\
		next_flag.c			\
		my_find_prime_sup.c		\
		my_print_digits.c		\
		my_sign.c			\
		my_str_isprintable.c		\
		to_send_inp.c			\
		my_getnb.c			\
		my_printf.c			\
		my_size_space_check.c		\
		my_str_isupper.c		\
		my_getnbr_base.c		\
		my_print_revalpha.c		\
		my_sort_int_array.c		\
		my_strlen.c

OBJS	=	$(SRCS:.c=.o)

HEADER	=	my.h

all	:	$(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	cp my.h ../../include/
	mv libmy.a ../
	rm $(OBJS)

clean	:
	$(RM) $(OBJS)

fclean :	clean
	$(RM) ../libmy.a
	$(RM) $(NAME)

re	:	fclean all

.PHONY:	all clean fclean re
