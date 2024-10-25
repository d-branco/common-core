# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 13:21:39 by abessa-m          #+#    #+#              #
#    Updated: 2024/10/25 16:48:06 by abessa-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# := means simple assignment
NAME := libft.a

TEST = main_test.c

CC = cc
CFLAGS = -Wall -Werror -Wextra

# Filter only existing source files
EXISTING_SRCS = $(wildcard $(SRCS))
OBJS = $(EXISTING_SRCS:.c=.o)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJS): check-sources
	@cc -Wall -Werror -Wextra $(EXISTING_SRCS)

SRCS = $(MANDATORY1)
# $(MANDATORY2) $(BONUS) $(PERSONAL)

MANDATORY1 = \
	ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
	ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
	ft_bzero.c \
	ft_atoi.c \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c 

#MANDATORY2 = 0
#	TODO aditional functions
#
#BONUS = 0
#	TODO or delete"

test: re
	clear
	@rm -f a.out
	@for src in $(SRCS); do \
		if [ ! -f $$src ]; then \
			echo "$$src: \033[0;93mFile not found!\033[0m"; \
		fi; \
		if [ -f $$src ]; then \
			norminette $$src | grep -q "Error!" && printf "$$src:  \033[41mnorminette ERROR!\033[0m | " || printf "$$src:\033[0;32m  norminette OK\033[0m | "; \
			cc -Wall -Werror -Wextra $(TEST) -L. -lft -o a.out; \
			valgrind --leak-check=full --show-leak-kinds=all ./a.out $$src 2>&1 | grep -q "definitely lost" && printf "\033[41mvalgrind ERROR!\033[0m" || echo "\033[0;32mvalgrind OK\033[0m"; \
			./a.out $$src; \
		fi; \
	done

all: $(NAME)

# example usage: print-SRCS
print-%: ; @echo '$(subst ','\'',$*=$($*))'
	@echo ' value = $(value $*)'
	@echo ' origin = $(origin $*)'
	@echo ' flavor = $(flavor $*)'
# original:
# print-%: ; @echo $*=$($*)

# Add check-sources target that just warns about missing files
check-sources:
	@for src in $(SRCS); do \
		if [ ! -f $$src ]; then \
			echo "\033[0;93mWarning: Source file '$$src' not found - skipping\033[0m"; \
		fi; \
	done

$(NAME): check-sources $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@rm -f $(OBJS)

clean:
	@rm -f $(OBJS)
	clear

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re test check-sources