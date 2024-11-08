# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 17:56:00 by abessa-m          #+#    #+#              #
#    Updated: 2024/11/08 19:09:50 by abessa-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
########################################################### Compiler and Flags #
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
####################################################################### Remove #
RM		= rm -f
###################################################################### Arquive #
AR		= ar rcs

SRCS	= ft_printf.c
OBJS	= $(SRC:.c=.o)

###################################################################### Targets #
all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS) \
		&& echo "$(PURPLE)    Library built$(COLOR-RESET)"

clean:
	@$(RM) $(OBJS) \
		&& echo "$(PURPLE)    Objects removed$(COLOR-RESET)"

fclean: clean
	@$(RM) $(NAME) \
		&& echo "$(PURPLE)    Library removed$(COLOR-RESET)"

re: fclean all
	@echo "$(PURPLE)    Redone$(COLOR-RESET)"

.PHONY: all clean fclean re 

################################################################# Shell  #
PURPLE = \033[1;35m
COLOR-RESET = \033[0m