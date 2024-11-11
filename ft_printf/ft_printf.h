/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:03:01 by abessa-m          #+#    #+#             */
/*   Updated: 2024/11/11 22:46:16 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *initial_str, ...);
void	printf_integer(char *conv_str, int *count, va_list ptr_args);
void	printf_character(char *conv_str, int *count, va_list ptr_args);
void	printf_string(char *conv_str, int *count, va_list ptr_args);
void	printf_unsigned_integer(char *conv_str, int *count, va_list ptr_args);
void	printf_unsigned_d(char *conv_str, int *count, va_list ptr_args);
char	*ft_ultoa(unsigned long nbr);

#endif
