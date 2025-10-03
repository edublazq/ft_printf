NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
LIBFT_DIR = Libft
LIBFT = $(LIBFT_DIR)/libft.a
SRCS = ft_printf.c \
ft_printf_utils.c
BONUS_SRCS = bonus/ft_printf_bonus.c \
bonus/ft_printf_utils_bonus.c
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

.c.o:
	@$(CC) $(CFLAGS) -c $< -o ${<:.c=.o} -L./Libft -lft

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	@echo "Compiling ft_printf..."
	@cp $(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJS)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR) all

bonus: $(LIBFT) $(BONUS_OBJS)
	@echo "🌟 Compiling bonus ft_printf 🌟"
	@ar rcs $(NAME) $(BONUS_OBJS)

clean:
	@echo "🗑️ Removing objs"
	@$(RM) $(OBJS) $(BONUS_OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@echo "🗑️ Removing $(NAME)"
	@$(RM) $(NAME) $(BONUS_OBJS)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re bonus
