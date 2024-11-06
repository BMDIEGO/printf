NAME	= libftprintf.a

SRCS	= ./sources/ft_printf.c \
	   	./sources/ft_numbers.c \
		./sources/ft_words.c \

OBJS	= $(SRCS:.c=.o)

CC	= cc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

re:			fclean all

fclean:		clean
			$(RM) $(NAME)

.PHONY:		all clean fclean re
