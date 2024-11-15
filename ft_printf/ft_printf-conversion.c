/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf-conversion.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:58:49 by abessa-m          #+#    #+#             */
/*   Updated: 2024/11/14 15:16:44 by abessa-m         ###   ########.fr       */
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
static char		*ft_allocate_string(char **str, size_t width, char padding);

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

size_t	ft_format_width(char *conv_str, char **str)
{
	size_t		width;
	char		padding;
	char		*astr;
	size_t		len;

	width = ft_format_width_padding(conv_str, &padding);
	len = ft_strlen(*str);
	if (*str[0] == '\0')
		len += 1;
	if (width >= len)
	{
		astr = ft_allocate_string(str, width, padding);
		if (!astr)
			return (0);
		ft_memset(astr, (char)padding, width);
		if (!(*str[0] == '\0' && (ft_strchr(conv_str, (int) 'c') == NULL))
			&& ft_strchr(conv_str, (int) '-') != NULL)
			ft_memcpy(astr, *str, len);
		else if (!(*str[0] == '\0' && (ft_strchr(conv_str, (int) 'c') == NULL)))
			ft_memcpy(astr + (width - len), *str, len);
		free(*str);
		*str = astr;
		return (width);
	}
	return (len);
}

static char	*ft_allocate_string(char **str, size_t width, char padding)
{
	char	*astr;

	astr = (char *)calloc(sizeof(char), (width + 1));
	if (!astr)
	{
		free(*str);
		return (NULL);
	}
	ft_memset(astr, (char)padding, width);
	return (astr);
}

static size_t	ft_format_width_padding(char *conv_str, char *padding)
{
	size_t	j;
	size_t	width;

	*padding = ' ';
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
	while (conv_str[j] != '\0')
	{
		if (conv_str[j] == '.')
			*padding = ' ';
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
	if (ptr_dot == NULL)
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
