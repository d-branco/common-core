/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:02:14 by abessa-m          #+#    #+#             */
/*   Updated: 2024/11/09 12:06:11 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Program name
//		libftprintf.a
//	Prototype
//		int	ft_printf(const char *, 	...);
//	Turn in files
//		Makefile, *.h, */*.h, *.c, */*.c
//	Makefile
//		NAME, all, clean, fclean, re
//	External functs.
//		malloc, free, write, va_start, va_arg, va_copy, va_end
//	Libft authorized
//		Yes
//	Description
//		Write a library that contains ft_printf(), a function that will mimic
//	the original printf()

#include "./ft_printf.h"
//	variatic function toolbox
//	Has the macros:
//		va_start - initialize the pointer
//		va_arg   - fetches the next arguments
//		va_copy
//		va_end   - resets the pointer and releases variatic pointer resources

int	ft_printf(const char *str, ...)
{
	size_t	i;
	va_list	ptr_args;
	char	chr;

	va_start(ptr_args, str);
	i = 0;
	while ((char *) *str != '\0')
	{
		chr = va_arg(ptr_args, char *);
		printf("%C", chr);
		i++;
	}
	return (i);
}

int	main(void)
{
	ft_printf("42");
//		%c Prints a single character.
//	ftprintf("%c%c!", 'O', 'i');
//		%s Prints a string (as defined by the common C convention).
//		%p The void * pointer argument has to be printed in hexadecimal format.
//		%d Prints a decimal (base 10) number.
//		%i Prints an integer in base 10.
//		%u Prints an unsigned decimal (base 10) number.
//		%x Prints a number in hexadecimal (base 16) lowercase format.
//		%X Prints a number in hexadecimal (base 16) uppercase format.
//		%% Prints a percent sign.
/*
	ft_printf("42");
	ft_printf("42");
	ft_printf("42");
	ft_printf("42");
	ft_printf("42");
	*/
}
