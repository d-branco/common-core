# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 13:21:39 by abessa-m          #+#    #+#              #
#    Updated: 2024/10/23 08:10:02 by abessa-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#you must submit a Makefile
#	TODO which will compile your source files to the required output with the flags:
#	DONE FLAGS-Wall, -Wextra and -Werror, use cc, and
#	TODO your Makefile must not relink.

#Your Makefile must at least contain the rules
#	DONE $(NAME),
#	DONE all,
#	TODO clean,
#	TODO fclean and
#	TODO re.

#Norm
#	TODO If the makefile relinks, the project will be considered non-functional.
#	TODO All source files you need to compile your project must be explicitly named in your Makefile.

# := means simple assignment
NAME := libft.a

$(SRCS) = $(MANDATORY1) $(MANDATORY2) $(BONUS) $(PERSONAL)

$(MANDATORY1) = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
				ft_strlen.c ft_strlen.c ft_strlcpy.c ft_strlcat.c strchr.c strrchr.c ft_strncmp.c strnstr.c\
				ft_toupper.c ft_tolower.c \
				memset.c memcpy.c memmove.c memchr.c memcmp.c \
				bzero.c \
				atoi.c

$(MANDATORY2)
	TODO aditional functions

$(BONUS)
	TODO or delete"

$(PERSONAL)
	TODO or remove

test:
	TODO How to test all of this?"

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