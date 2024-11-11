/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:03:01 by abessa-m          #+#    #+#             */
/*   Updated: 2024/11/11 19:53:00 by abessa-m         ###   ########.fr       */
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

#endif
