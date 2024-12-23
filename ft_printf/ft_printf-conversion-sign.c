/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf-conversion-sign.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:31:14 by abessa-m          #+#    #+#             */
/*   Updated: 2024/12/23 19:00:49 by abessa-m         ###   ########.fr       */
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

static void	ft_slide_sign_into_digit(char **str);
static char	ft_determine_sign(char *conv_str);
static char	*ft_replaces_minus_sign(char **str);

// char	*ft_strchr(const char *s, int c)
// char	*ft_strtrim(char const *s1, char const *set)
char	ft_format_place_sign(char *conv_str, char **str)
{
	char	sign;

	sign = '\0';
	if (!ft_replaces_minus_sign(str))
		return ('\a');
	if (!*str)
		return (sign);
	sign = ft_determine_sign(conv_str);
	if (sign != '\a' && str[0][0] == '0')
		*str = ad_malloc_cat_prefix_and_free_string(&sign, *str);
	else if (str[0][0] == '-')
		ft_slide_sign_into_digit(str);
	else if (sign == '+')
	{
		if (ft_isdigit(str[0][0]) != 0)
			*str = ad_malloc_cat_prefix_and_free_string(&sign, *str);
		str[0][0] = '+';
		ft_slide_sign_into_digit(str);
	}
	else
		*str = ad_malloc_cat_prefix_and_free_string(&sign, *str);
	return (sign);
}

static char	*ft_replaces_minus_sign(char **str)
{
	char	*ptr;
	char	*new_str;
	char	*sign_str;

	ptr = ft_strchr(*str, (int) '-');
	if (ptr != NULL)
	{
		sign_str = "-";
		new_str = ad_rm_chr(*str, sign_str);
		if (!new_str)
			return (NULL);
		free(*str);
		*str = ad_malloc_cat_prefix_and_free_string(sign_str, new_str);
	}
	return (*str);
}

static char	ft_determine_sign(char *conv_str)
{
	char	sign;
	int		j;

	sign = '\a';
	j = 0;
	while (conv_str[j] != '\0' && conv_str[j] != '.'
		&& (conv_str[j] < '1' || conv_str[j] > '9'))
	{
		if (conv_str[j] == ' ' && sign != '+')
			sign = ' ';
		if (conv_str[j] == '+')
			sign = '+';
		j++;
	}
	return (sign);
}

static void	ft_slide_sign_into_digit(char **str)
{
	int		j;
	char	temp;

	if (!str)
		return ;
	if (str[0][0] == '\0')
		return ;
	if (ft_isalnum(str[0][0]) != 0)
		return ;
	j = 0;
	while (str[0][j + 1] == ' ')
	{
		temp = str[0][j];
		str[0][j] = str[0][j + 1];
		str[0][j + 1] = temp;
		j++;
	}
}
