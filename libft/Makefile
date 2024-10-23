# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 13:21:39 by abessa-m          #+#    #+#              #
#    Updated: 2024/10/23 14:35:45 by abessa-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# := means simple assignment
NAME := libft.a

SRCS = $(MANDATORY1)
# $(MANDATORY2) $(BONUS) $(PERSONAL)

MANDATORY1 = ft_isalpha.c
#ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_strlen.c ft_strlcpy.c ft_strlcat.c strchr.c strrchr.c ft_strncmp.c strnstr.c\
	ft_toupper.c ft_tolower.c \
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

all: $(NAME)

$(NAME):
	ar r $(NAME) $(OBJS)

$(OBJS):
	cc -Wall -Werror -Wextra $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all