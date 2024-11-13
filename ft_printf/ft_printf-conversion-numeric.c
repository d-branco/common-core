/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf-conversion-numeric.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:42:23 by abessa-m          #+#    #+#             */
/*   Updated: 2024/11/13 13:42:23 by abessa-m         ###   ########.fr       */
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

static void		ft_format_precision_numeric_add_digits(
					char **str, int n_padding);
static void		ft_set_it_empty(char **str);

// minimun number of digits to be printed
void	ft_format_precision_numeric(char *conv_str, char **str)
{
	char	*ptr_dot;
	long	precision;
	int		digits;
	int		j;

	if (*str[0] == '\0')
		return ;
	ptr_dot = ft_strchr(conv_str, '.');
	if (ptr_dot == NULL)
		return ;
	ptr_dot++;
	precision = ft_atoi(ptr_dot);
	if ((precision == 0) && (ft_atoi(*str) == 0))
		ft_set_it_empty(str);
	j = 0;
	digits = 0;
	while ((*str)[j] != '\0')
	{
		if (ft_isdigit(str[0][j]) != 0)
			digits++;
		j++;
	}
	if (precision > digits)
		ft_format_precision_numeric_add_digits(str, (int)(precision - digits));
}

static void	ft_set_it_empty(char **str)
{
	char	*new_str;

	new_str = (char *)calloc(sizeof(char), 1);
	if (!new_str)
		return ;
	free(*str);
	*str = new_str;
}

static void	ft_format_precision_numeric_add_digits(char **str, int n_padding)
{
	char	*new_str;
	int		j;
	int		i;

	new_str = (char *)calloc(sizeof(char), (ft_strlen(*str) + 1 + n_padding));
	j = 0;
	while (ft_isdigit(str[0][j]) == 0)
	{
		new_str[j] = str[0][j];
		j++;
	}
	i = 0;
	while (n_padding > 0)
	{
		new_str[j + i] = '0';
		n_padding--;
		i++;
	}
	while (str[0][j] != '\0')
	{
		new_str[j + i] = str[0][j];
		j++;
	}
	free(*str);
	*str = new_str;
}
