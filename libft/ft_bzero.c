/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:17:45 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/26 15:37:22 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Emulates bzero from libc

//NAME
//	bzero - zero a byte string

//SYNOPSIS
//	void	bzero(void *s, size_t n);

//DESCRIPTION
//		The bzero() function erases the data in the n bytes of the memory
//	starting at the location pointed to by s, by  writing zeros (bytes
//	containing '\0') to that area.

//RETURN VALUE
//		None.

// In order to have acess to t_size_t
#include "libft.h"

void	ft_bzero(void *s, t_size_t n)
{
	t_size_t	j;
	char		*ptr;

	j = 0;
	ptr = (char *) s;
	while (j < n)
	{
		ptr[j] = 0;
		j++;
	}
}
