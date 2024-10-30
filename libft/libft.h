/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:10:20 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/30 14:09:35 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// usage:
// #include "libft.h"

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
char		*ft_strchr(const char *s, int c);
void		ft_bzero(void *s, t_size_t n);
int			ft_memcmp(const void *s1, const void *s2, t_size_t n);
void		*ft_memmove(void *dest, const void *src, t_size_t n);
void		*ft_memchr(const void *s, int c, t_size_t n);
char		*strrchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
t_size_t	ft_strlcat(char *dst, const char *src, t_size_t size);
t_size_t	ft_strlcpy(char *dst, const char *src, t_size_t size);
int			ft_atoi(const char *nptr);
char		*ft_strnstr(const char *big, const char *little, t_size_t len);
int			ft_strncmp(const char *s1, const char *s2, t_size_t n);

#endif
