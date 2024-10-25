/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:55:39 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/25 16:27:34 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//	The  memset() function fills the first n bytes
//	of the memory area pointed to by s with the constant byte c.
//
// RETURN VALUE
//	The memset() function returns a pointer to the memory area s.

#include "libft.h"

void	*ft_memset(void *s, int c, t_size_t n)
{
	unsigned int	j;
	unsigned int	*ptr;

	ptr = s;
	j = 0;
	while (j < n)
	{
		ptr[j] = c;
		j++;
	}
	return (s);
}
