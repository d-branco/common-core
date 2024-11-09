# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    $(MAKE)file                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 17:56:00 by abessa-m          #+#    #+#              #
#    Updated: 2024/11/09 11:54:32 by abessa-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
LIBFT	= libft/libft.a
########################################################### Compiler and Flags #
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
####################################################################### Remove #
RM		= rm -f
###################################################################### Arquive #
AR		= ar rcs
###################################################################### Sources #
SRCS	= ft_printf.c
OBJS	= $(SRCS:.c=.o)
###################################################################### Headers #
HEADERS	= ft_printf.h

######################################################################### make #
MAKE_SILENT = $(MAKE) --no-print-directory
############################################################ Mandatory Targets #
all: $(LIBFT) $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@cd libft && ar x libft.a \
	&& $(AR) $(NAME) libft/*.o $(OBJS) \
	&& echo "$(PURPLE)    Library built$(COR)"

%.o: %.c ft_printf.h
	@$(CC) $(CFLAGS) -c $< -o $@ \
	&& echo "$(PURPLE)Compiled: $<$(RESET)"

clean:
	@make --no-print-directory -C libft clean \
	&& $(RM) $(OBJS) \
	&& echo "$(PURPLE)    Objects removed$(COR)"

fclean: clean
	@make --no-print-directory -C libft fclean \
	&& $(RM) $(NAME) \
	&& echo "$(PURPLE)    Library removed$(COR)"

re: fclean all
	@echo "$(PURPLE)    Redone$(COR)"

.PHONY: all clean fclean re 
################################################################## Build libft #
$(LIBFT):
	@make --no-print-directory -C libft && echo "$(PURPLE)    libft library built$(COR)"
###################################################################### Colors  #
PURPLE = \033[1;35m
# purple
COR = \033[0m
# color remove