NAME = libftprintf.a

SRCS = ft_printf.c \
       ft_printf_bonus.c \
       (otros archivos .c necesarios)

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
    ar rcs $(NAME) $(OBJS) $(LIBFT)

$(LIBFT):
    $(MAKE) -C $(LIBFT_DIR)

clean:
    rm -f $(OBJS)
    $(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
    rm -f $(NAME)
    $(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

bonus: $(NAME)

.PHONY: all clean fclean re bonus