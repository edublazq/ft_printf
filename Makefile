NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
RM = rm -rf
LIBFT_DIR = Libft
LIBFT = $(LIBFT_DIR)/libft.a
SRCS = ft_printf.c \
ft_printf_utils_2.c \
ft_printf_utils.c
OBJS = $(SRCS:.c=.o)

.c.o:
	@$(CC) $(CFLAGS) -c $< -o ${<:.c=.o} -I./Libft

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	@echo "Compiling ft_printf..."
	@cp $(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJS)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR) all

clean:
	@echo "🗑️ Removing objs"
	@$(RM) $(OBJS) $(BONUS_OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@echo "🗑️ Removing $(NAME)"
	@$(RM) $(NAME) $(BONUS_OBJS)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
