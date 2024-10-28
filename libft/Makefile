# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 13:21:39 by abessa-m          #+#    #+#              #
#    Updated: 2024/10/27 12:05:04 by abessa-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NOTE Moullinette does not aprove shell commands (like "echo:) on Makefile!

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

SRCS = $(MANDATORY1) $(BONUS) 

MANDATORY1 = \
	ft_strlen.c ft_memcpy.c ft_memset.c ft_bzero.c ft_memmove.c ft_memcmp.c ft_memchr.c \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strlcat.c ft_strlcpy.c ft_atoi.c ft_strnstr.c ft_strncmp.c ft_calloc.c ft_strdup.c \
	\
	ft_substr ft_strjoin ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd \
	ft_strmapi ft_striteri ft_strtrim ft_split  ft_itoa 

BONUS = \
	ft_lstnew \
	ft_lstdelone \
	ft_lstclear \
	ft_lstadd_front \
	ft_lstadd_back \
	ft_lstsize\
	ft_lstlast \
	ft_lstiter \
	ft_lstmap 

test: re
	clear
	@rm -f a.out
	@for src in $(SRCS); do \
		if [ ! -f $$src ]; then \
			echo "$$src: \033[0;93mFile not found!\033[0m"; \
		fi; \
		if [ -f $$src ]; then \
			norminette $$src | grep -q "Error!" && printf "$$src:  \033[41mnorminette ERROR!\033[0m" || printf "$$src:\033[0;32m  norminette OK\033[0m"; \
			cc -Wall -Werror -Wextra $(TEST) -L. -lft -o test.out; \
			printf " | \033[41m"; \
			valgrind --leak-check=full --show-leak-kinds=all ./test.out $$src 2>&1 | grep -q "ERROR SUMMARY: 0 errors from 0 contexts" && printf "\033[0;32m valgrind OK\033[0m\n" || echo "\033[41m valgrind ERROR!\033[0m"; \
			./test.out $$src; \
		fi; \
	done

all: $(NAME)

bonus:	${NAME} ${BONUS}
	@ar rcs $(NAME) $(OBJS) ${BONUS}

# example usage: print-SRCS
print-%: ; @echo '$(subst ','\'',$*=$($*))'
	@echo ' value = $(value $*)'
	@echo ' origin = $(origin $*)'
	@echo ' flavor = $(flavor $*)'

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
	@rm -f test.out
	clear

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re test check-sources
