/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:24:41 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/25 19:20:09 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Emulates memcpy(3)

// DESCRIPTION
//	Copies n bytes from memory area src to memory area dest.
//	The memory areas must not overlap.
// RETURN VALUE
//	The memcpy() function returns a pointer to dest.

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, t_size_t n)
{
	unsigned int		j;
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	j = 0;
	while (j < n)
	{
		d[j] = s[j];
		j++;
	}
	return (dest);
}
