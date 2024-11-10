/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:02:14 by abessa-m          #+#    #+#             */
/*   Updated: 2024/11/10 19:00:31 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Program name
//		libftprintf.a
//	Prototype
//		int	ft_printf(const char *, ...);
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

#include "ft_printf.h"
//	variatic function toolbox
//	Has the macros:
//		va_start - initialize the pointer
//		va_arg   - fetches the next arguments
//		va_copy
//		va_end   - resets the pointer and releases variatic pointer resources
static int	is_flag(char chr);
static int	identify_flag(char *str, int index);

int	ft_printf(const char *initial_str, ...)
{
	va_list	ptr_args;
	int		i;

	if (!initial_str)
		return (-1);
	va_start(ptr_args, initial_str);
	i = 0;
	while (initial_str[i] != '\0')
	{
		va_arg(ptr_args, char *);
		if (initial_str[i] == '%')
		{
			i = identify_flag((char *) initial_str, i);
			if (i == -1)
				return (-1);
			// process flag that starts in i and ends in j (inclusive)
		}
		write(1, &initial_str[i], 1);
		i++;
	}
	va_end(ptr_args);
	return (i);
}

static int	identify_flag(char *str, int index)
{
	int		j;
	char	*temp_str;

	j = index;
	while (str[j] != '\0')
	{
		j++;
		if (is_flag(str[j]) == 1)
		{
			temp_str = ft_substr(str, index, (j - index));
			ft_putstr_fd((temp_str), 1);
			free(temp_str);
			index = j;
			break ;
		}
	}
	if (str[j] == '\0')
		return (-1);
	return (index);
}

static int	is_flag(char chr)
{
	if (ft_strchr("cspdiuxX%", chr) == NULL)
		return (0);
	return (1);
}
