# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makesrc                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 13:21:39 by abessa-m          #+#    #+#              #
#    Updated: 2024/10/23 16:58:06 by abessa-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# := means simple assignment
NAME := libft.a

TEST = main_test.c

CC = cc
CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:.c=.o)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJS):
	@cc -Wall -Werror -Wextra $(SRCS)

SRCS = $(MANDATORY1)
# $(MANDATORY2) $(BONUS) $(PERSONAL)

MANDATORY1 = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
#	ft_strlen.c ft_strlen.c ft_strlcpy.c ft_strlcat.c strchr.c strrchr.c ft_strncmp.c strnstr.c \
	memset.c memcpy.c memmove.c memchr.c memcmp.c \
	bzero.c \
	atoi.c

#MANDATORY2 = 0
#	TODO aditional functions
#
#BONUS = 0
#	TODO or delete"
#
#PERSONAL = 0
#	TODO or remove
#
#test:
#	TODO How to test all of this?"

test: re
	clear
	@for src in $(SRCS); do \
		norminette $$src | grep -q "Error!" && echo "$$src:\033[41m  norminette ERROR!\033[0m | " || printf "$$src:\033[0;32m  norminette OK\033[0m | "; \
		cc -Wall -Werror -Wextra $(TEST) -L. -lft -o a.out; \
		@valgrind --leak-check=full --show-leak-kinds=all ./a.out $$src 2>&1 | grep -q "definitely lost" && echo "\033[41mvalgrind ERROR!\033[0m" || echo "\033[0;32mvalgrind OK\033[0m"; \
		./a.out $$src; \
	done
	@rm -f a.out

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@rm -f $(OBJS)

clean:
	@rm -f $(OBJS)
	clear

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re test
