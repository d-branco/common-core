/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:10:20 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/26 10:32:47 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// usage: #include "libft.h"

#ifndef LIBFT_H
# define LIBFT_H

typedef typeof(sizeof(0))	t_size_t;

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
t_size_t	ft_strlen(const char *s);
void		*ft_memset(void *s, int c, t_size_t n);
void		*ft_memcpy(void *dest, const void *src, t_size_t n);
char		*strchr(const char *s, int c);

#endif
