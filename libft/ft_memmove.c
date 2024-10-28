/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 07:45:38 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/28 08:46:40 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Replicates memmove from libc

//NAME
//	memmove - copy memory area
//
//LIBRARY
//	Standard C library (libc, -lc)
//
//SYNOPSIS
//	void *memmove(void dest[.n], const void src[.n], size_t n);
//
//DESCRIPTION
//		The memmove() function copies n bytes from memory area src to memory
//	area dest. The memory areas may overlap: copying takes place as though the
//	bytes in src are first copied into a temporary array that does not overlap
//	src or dest, and the bytes are then copied from the temporary array to
//	dest.

//RETURN VALUE
//	The memmove() function returns a pointer to dest.

#include "libft.h"

void	*memmove(void *dest, const void *src, t_size_t n)
{
	char				*temp;
	unsigned int		j;
	unsigned char		*d;
	const unsigned char	*s;

	temp = (char *) src;
	d = dest;
	s = src;
	j = 0;
	while (j < n)
	{
		temp[j] = s[j];
		j++;
	}
	j = 0;
	while (j < n)
	{
		d[j] = temp[j];
		j++;
	}
	return (dest);
}
