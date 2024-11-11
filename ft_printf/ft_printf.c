/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:02:14 by abessa-m          #+#    #+#             */
/*   Updated: 2024/11/11 12:08:37 by abessa-m         ###   ########.fr       */
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

//	SYNTAX
//	%[$][flags][width][.precision][length modifier]conversion

static int	is_flag(char chr);
static void	format_converted(char *str, int *index, int *count);

int	ft_printf(const char *initial_str, ...)
{
	va_list	ptr_args;
	int		i;
	int		count;

	if (!initial_str)
		return (-1);
	i = 0;
	count = 0;
	va_start(ptr_args, initial_str);
	while (initial_str[i] != '\0')
	{
		if (initial_str[i] == '%')
		{
			format_converted((char *) initial_str, &i, &count);
			if (i == -1)
				return (-1);
			continue ;
		}
		write(1, &initial_str[i], 1);
		i++;
		count++;
	}
	va_end(ptr_args);
	return (count);
}

static void	format_converted(char *str, int *index, int *count)
{
	int		j;
	char	*conversion_str;

	j = *index;
	while (str[j] != '\0')
	{
		j++;
		if (is_flag(str[j]) == 1)
		{
			conversion_str = ft_substr(str, *index, (j - *index + 1));
			if (conversion_str == NULL)
			{
				*index = -1;
				return ;
			}
			if (ft_strncmp(conversion_str, "%%", 2) == 0)
			{
				ft_putchar_fd('%', 1);
				*index += 2;
				*count += 1;
				return ;
			}
			ft_putchar_fd('{', 1);
			ft_putstr_fd((conversion_str), 1);
			*count += ft_strlen(conversion_str);
			ft_putchar_fd('}', 1);
			*index = j + 1;
			break ;
		}
	}
	if (str[j] == '\0')
		*index = -1;
	free(conversion_str);
	return ;
}

static int	is_flag(char chr)
{
	if (ft_strchr("cspdiuxX%", chr) == NULL)
		return (0);
	return (1);
}
