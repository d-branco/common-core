/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf-small.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:44:57 by abessa-m          #+#    #+#             */
/*   Updated: 2024/11/11 22:07:37 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//SYNTAX
//%[flags][width][.precision]conversion
// [flags] - (minus)                    | left-align if padded
// [flags] 0 (zero)                     | uses '0' to pad the width
// [flags] + (plus) (overrides space)   | prints '+' for positive numbers
// [flags]' '(space)                    | prints ' ' for positive numbers
// [flags] # (hash)                     | alternate form (includes prefix)
//        [width] digit (decimal int)   | padding
//               [.precision] . (point) | minimum number of digits

#include "ft_printf.h"

void	printf_integer(char *conv_str, int *count, va_list ptr_args)
{
	char	*str;

	if (!conv_str)
		return ;
	str = ft_itoa((int)va_arg(ptr_args, int));
	ft_putstr_fd(str, 1);
	*count += ft_strlen(str);
	free(str);
}

void	printf_character(char *conv_str, int *count, va_list ptr_args)
{
	char	chr;

	if (!conv_str)
		return ;
	chr = (char)va_arg(ptr_args, int);
	ft_putchar_fd(chr, 1);
	*count += 1;
}

void	printf_string(char *conv_str, int *count, va_list ptr_args)
{
	char	*str;

	if (!conv_str)
		return ;
	str = va_arg(ptr_args, char *);
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		*count += 6;
	}
	else
	{
		str = ft_strdup(str);
		ft_putstr_fd(str, 1);
		*count += ft_strlen(str);
	}
	free(str);
}

void	printf_unsigned_integer(char *conv_str, int *count, va_list ptr_args)
{
	char	*str;

	if (!conv_str)
		return ;
	str = ft_itoa((unsigned int)va_arg(ptr_args, unsigned int));
	ft_putstr_fd(str, 1);
	*count += ft_strlen(str);
	free(str);
}
