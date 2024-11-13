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

##########################            TEMP            ##########################
test: re clean
	@ printf "$(YELLOW)" ; norminette $(SRCS) ; printf "$(COR)" \
	; $(CC) main-test.c libftprintf.a \
	&& echo "$(GRAY)compiled: $(COR) main-test.c libftprintf.a -g" \
	&& valgrind -q -s ./a.out \

#	; rm -f a.out 
##########################            TEMP            ##########################

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
SRCS	= ft_printf.c ft_printf-decimal.c ft_printf-hex.c ft_printf-conversion.c
OBJS	= $(SRCS:.c=.o)
###################################################################### Headers #
HEADERS	= ft_printf.h
######################################################################### make #
MAKE_SILENT = $(MAKE) --no-print-directory
############################################################ Mandatory Targets #
all: $(LIBFT) $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@cd libft \
	&& ar x libft.a \
	&& cd .. \
	&& $(AR) $(NAME) libft/*.o $(OBJS) \
	&& echo "$(PURPLE)Library built: $(NAME)$(COR)"

%.o: %.c ft_printf.h
	@$(CC) $(CFLAGS) -c $< -o $@ \
	&& echo "$(GRAY)compiled: $(COR) $<: "

clean:
	@make --no-print-directory -C libft clean \
	&& $(RM) $(OBJS) \
	&& echo "$(GRAY)Objects removed$(COR)"

fclean: clean
	@make --no-print-directory -C libft fclean \
	&& $(RM) $(NAME) \
	&& echo "$(GRAY)Libraries removed$(COR)"

re: fclean all
	@echo "$(GRAY)redone$(COR)"

.PHONY: all clean fclean re
################################################################ Bonus Targets #
bonus: all
################################################################## Build libft #
$(LIBFT):
	@make --no-print-directory -C libft \
	&& echo "$(PURPLE)Library built: $(LIBFT)$(COR)"
###################################################################### Colors  #
# COlor Remove
COR = \033[0m    
# purple
PURPLE = \033[1;35m    
# purple
GRAY = \033[1;90m    
# yellow
YELLOW = \033[1;93m    