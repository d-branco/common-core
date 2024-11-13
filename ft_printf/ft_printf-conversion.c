/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf-conversion.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:58:49 by abessa-m          #+#    #+#             */
/*   Updated: 2024/11/13 10:08:21 by abessa-m         ###   ########.fr       */
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

static size_t	ft_format_width_padding(char *conv_str, char *padding);

void	ft_format_alternate(char *conv_str, char **str)
{
	int		j;
	char	*astr;

	j = 0;
	while (conv_str[j] != '\0'
		&& conv_str[j] != '.'
		&& (conv_str[j] <= '0' || conv_str[j] > '9'))
	{
		if (conv_str[j] == '#')
		{
			astr = (char *)malloc(sizeof(char) * (2 + ft_strlen(*str) + 1));
			if (!astr)
			{
				free(*str);
				return ;
			}
			ft_strlcpy(astr, "0x", (2 + ft_strlen(*str) + 1));
			ft_strlcat(astr, *str, (2 + ft_strlen(*str) + 1));
			free(*str);
			*str = astr;
			return ;
		}
		j++;
	}
	return ;
}

// char	*ft_strchr(const char *s, int c)
#include <stdio.h>
size_t	ft_format_width(char *conv_str, char **str)
{
	size_t		width;
	char		padding;
	char		*astr;
	size_t		len;

	padding = ' ';
	width = ft_format_width_padding(conv_str, &padding);
	len = ft_strlen(*str);
	if (*str[0] == '\0')
		len += 1;
	if (width >= len)
	{
		astr = (char *)calloc(sizeof(char), (width + 1));
		if (!astr)
		{
			free(*str);
			return (0);
		}
		ft_memset(astr, (char)padding, width);
		if (*str[0] != '\0' || (ft_strchr(conv_str,(int) 's') == NULL))
			ft_memcpy(astr + (width - len), *str, len);
		free(*str);
		*str = astr;
		return (width);
	}
	return (len);
}

static size_t	ft_format_width_padding(char *conv_str, char *padding)
{
	size_t	j;
	size_t	width;

	width = 0;
	j = 0;
	while (conv_str[j] != '\0' && conv_str[j] != '.')
	{
		if (conv_str[j] == '0')
			*padding = '0';
		else if (ft_isdigit(conv_str[j]) != 0)
		{
			width = ft_atoi(&conv_str[j]);
			break ;
		}
		j++;
	}
	return (width);
}

// the maximum number of characters to be printed
// char	*ft_strchr(const char *s, int c)
// size_t strlcpy(char *dst, const char *src, size_t size);
// int ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_format_precision_string(char *conv_str, char **str)
{
	char	*ptr_dot;
	char	*new_str;
	long	precision;

	if (*str[0] == '\0')
		return ;
	ptr_dot = ft_strchr(conv_str, '.');
	if (ptr_dot  == NULL)
		return ;
	ptr_dot++;
	precision = ft_atoi(ptr_dot);
	if (ft_memcmp("(null)", *str, 7) == 0)
	{
		if (precision < 6)
			precision = 0;
	}
	if (precision < 0)
		precision = 0;
	new_str = (char *)calloc(sizeof(char), (precision + 1));
	if (!new_str)
		return ;
	ft_strlcpy(new_str, *str, precision + 1);
	free(*str);
	*str = new_str;
}


//size_t	ft_format_precision_numeric(char *conv_str, char **str)

// test 491 passed
// test 507 passed (0x when 'u'  )
// test 523 passed (0x both upper and lower)
// test 530 passed with char width
// test 540 passed s (with only one line added)
// test 541 passed all up to basic pointers
// test 544 passed all up to pointer with padding
// test 690 passed all widths
//int	ft_format_width(char *conv_str)