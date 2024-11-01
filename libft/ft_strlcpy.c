/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:03:59 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/29 21:35:42 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reimplements strlcpy

//	NAME
//		strlcpy — size-bounded string copying

//	LIBRARY
//		Utility functions from BSD systems (libbsd, -lbsd)

//	SYNOPSIS
//		size_t strlcpy(char *dst, const char *src, size_t size);

//	DESCRIPTION
//		The strlcpy() function copies strings. It is designed to be safer, more
//	consistent, and less error prone replacement for strncpy. Unlike that
//	function, strlcpy() takes the full size of the buffer (not just the length)
//	and guarantees to NUL-terminate the result (as long as size is larger than
//	0). Note that a byte for the NUL should be included in size. Also note that
//	strlcpy() only operates on true "C" strings. This means that src must be
//	NUL-terminated.

//		The strlcpy() function copies up to size - 1 characters from the NUL-
//	terminated string src to dst, NUL-terminating the result.

//	RETURN VALUES
//		The strlcpy() function returns the total length of the string it tried
//	to create. That means the length of src. While this may seem somewhat
//	confusing, it was done to make truncation detection simple.

//	In order to include size_t
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len_src;

	if (!dst || !src)
		return (-1);
	len_src = 0;
	if (size > 0)
	{
		while (len_src < (size - 1)
			&& src[len_src] != '\0')
		{
			dst[len_src] = src[len_src];
			len_src++;
		}
		dst[len_src] = '\0';
	}
	while (src[len_src] != '\0')
		len_src++;
	return (len_src);
}
