/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:02:14 by abessa-m          #+#    #+#             */
/*   Updated: 2024/11/09 17:12:04 by abessa-m         ###   ########.fr       */
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

int	ft_printf(const char *initial_str, ...)
{
	va_list	ptr_args;
	char	*ptr_chr;
	int		i;

	if (!initial_str)
		return (-1);
	va_start(ptr_args, initial_str);
	i = 0;
	while (initial_str[i] != '\0')
	{
		ptr_chr = va_arg(ptr_args, char *);
		write(1, &initial_str[i], 1);
		i++;
	}
	va_end(ptr_args);
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*initial_str_test;

	initial_str_test = "42";
	printf("ft_print()\n");
	
////
	ft_printf("42");
////

	printf("\n\nprintf()\n");
	
////
	printf("42");
////

	printf("\n");

//###################################################################### TESTS #
	//	notes about FLAGS ("Sinalizadores" in portuguese) 
	//		appear IMEDIATLY after the %
	// '-'	left alignment
	// ' '	inserts blank space before postive numbers (see '+')
	// '+'	exibits a plus sign in positive numbers (takes precedence over ' ')
	// '0'	left padded with zeros
	// '#'	alternative format ('0' for octals and '0x' for headecimals)
	int num = 42;
	printf("Decimal: %d\n", num);			// Output: 42
	printf("Octal with #: %#o\n", num);		// Output: 052 (note leading 0)
	printf("Octal without #: %o\n", num);	// Output: 52
	printf("Hex with #: %#x\n", num);		// Output: 0x2a
	printf("Hex without #: %x\n", num);		// Output: 2a
	printf("HEX with #: %#X\n", num);		// Output: 0X2A
	double f = 123.0;
	printf("Float with #: %#f\n", f);		// Output: 123.000000
	printf("Float with #: %#.0f\n", f);		// Output: 123.
	printf("Float without #: %.0f\n", f);	// Output: 123
	// The + flag forces showing the sign (+ or -) for numeric values
	int pos = 42;
	int neg = -42;
	printf("Positive with +: %+d\n", pos);		// Output: +42
	printf("Positive without +: %d\n", pos);	// Output: 42
	printf("Negative with +: %+d\n", neg);		// Output: -42
	printf("Negative without +: %d\n", neg);	// Output: -42
	// The space flag leaves a blank space before positive numbers
	// and a minus sign before negative numbers
	// Note: + flag takes precedence over space flag if both are used
	printf("Positive with space: % d\n", pos);	// Output:  42 (space before 42)
	printf("Positive with +: %+d\n", pos);		// Output: +42
	printf("Positive plain: %d\n", pos);		// Output: 42
	printf("Negative with space: % d\n", neg);	// Output: -42
	printf("Negative plain: %d\n", neg);		// Output: -42
	double fpos = 3.14;
	double fneg = -3.14;
	printf("Positive float with +: %+f\n", fpos);		// Output: +3.140000
	printf("Positive float without +: %f\n", fpos);		// Output: 3.140000
	printf("Negative float with +: %+f\n", fneg);		// Output: -3.140000
	printf("Negative float without +: %f\n", fneg);		// Output: -3.140000
	printf("Positive float with space: % f\n", fpos);	// Output:  3.140000
	printf("Positive float with +: %+f\n", fpos);		// Output: +3.140000
	printf("Positive float plain: %f\n", fpos);			// Output: 3.140000
	printf("Negative float with space: % f\n", fneg);	// Output: -3.140000
	// You can combine both + and #
	printf("Combined flags: %+#x\n", pos);				// Output: +0x2a
	printf("Combined flags: %+#o\n", pos);				// Output: +052
	printf("Combined flags: %+#f\n", fpos);				// Output: +3.140000
	// When both space and + flags are used, + takes precedence
	printf("Space and + combined: % +d\n", pos);		// Output: +42 (+ wins)
	printf("+ and space combined: %+ d\n", pos);		// Output: +42 (+ wins)
	// Space flag can be combined with #
	printf("Space and # with hex: % #x\n", pos);		// Output:  0x2a
	printf("Space and # with float: % #.0f\n", fpos);	// Output:  3.

}
*/