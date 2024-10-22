# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 13:21:39 by abessa-m          #+#    #+#              #
#    Updated: 2024/10/22 13:53:27 by abessa-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#you must submit a Makefile
#	which will compile your source files to the required output with the flags:
#	-Wall, -Wextra and -Werror, use cc, and
#	your Makefile must not relink.

#Your Makefile must at least contain the rules
#	$(NAME),
#	all,
#	clean,
#	fclean and
#	re.

#Norm
#	The $(NAME), clean, fclean, re and all rules are mandatory.
#	If the makefile relinks, the project will be considered non-functional.
#	In the case of a multibinary project, in addition to the above rules, you must have a rule that compiles both binaries as well as a specific rule for each binary compiled.
#	In the case of a project that calls a function from a non-system library (e.g.: libft), your makefile must compile this library automatically.
#	All source files you need to compile your project must be explicitly named in your Makefile.

test:
	@echo "Testing the function X"
	cc -Wall -Werror -Wextra ft_isalpha.c


$(NAME):

all:
	

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all