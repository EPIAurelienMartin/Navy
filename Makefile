##
## EPITECH PROJECT, 2017
## MAKEFILE
## File description:
## Makefile
##

NAME	= navy

CC	= gcc

RM	= rm -f

SRCS	=	./src/check_my_file.c \
		./src/display_and_cond.c \
		./src/get_next_line.c \
		./src/handle_every_sig.c \
		./src/init_everything.c \
		./src/main.c \
		./src/send_and_touch.c \
		./src/player_one.c	\
		./src/player_two.c

OBJS	= $(SRCS:.c=.o)

LIB = -L ./lib/ -lmy

CFLAGS = -I ./include/

CFLAGS += -W -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 make -C ./lib/my/
	 $(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LIB)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	make fclean -C ./lib/my/

re: fclean all

.PHONY: all clean fclean re
