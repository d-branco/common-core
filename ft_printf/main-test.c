/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main-test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:19:10 by abessa-m          #+#    #+#             */
/*   Updated: 2024/11/10 21:15:34 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	i;

	ft_printf("ft_printf(): <");
	i = ft_printf("4%2d", 2);
	printf("> (return: %i)\n   printf(): <", i);
	i = printf("4%2d", 2);
	printf("> (return: %i)\n", i);
}
/*
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