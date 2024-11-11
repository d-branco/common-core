/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf-large.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:31:29 by abessa-m          #+#    #+#             */
/*   Updated: 2024/11/11 22:47:16 by abessa-m         ###   ########.fr       */
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

void	printf_unsigned_d(char *conv_str, int *count, va_list ptr_args)
{
	char	*str;

	if (!conv_str)
		return ;
	str = ft_ultoa((unsigned long)va_arg(ptr_args, unsigned int));
	if (!str)
		return ;
	ft_putstr_fd(str, 1);
	*count += ft_strlen(str);
	free(str);
}

char	*ft_ultoa(unsigned long nbr)
{
	size_t			len;
	char			*str;
	unsigned long	n;

	len = 1;
	n = nbr;
	while (n >= 10)
	{
		len++;
		n /= 10;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		len--;
		str[len] = '0' + (nbr % 10);
		nbr /= 10;
	}
	return (str);
}

//X

//X

//void	printf_pointer(char *conv_str, int *count, va_list ptr_args)
//{
//	
//}