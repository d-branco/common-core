/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:39:41 by abessa-m          #+#    #+#             */
/*   Updated: 2024/11/02 11:13:31 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Function name
//		ft_putnbr_fd
//	Prototype
//		void ft_putnbr_fd(int n, int fd);
//	Turn in files
//		-
//	Parameters
//		n: The integer to output.
//		fd: The file descriptor on which to write.
//	Return value
//		None
//	External functs.
//		write
//	Description
//		Outputs the integer ’n’ to the given file descriptor.

#include "libft.h"
// write()

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		n = -n
	if (n > 10)
	{
		
	}
}
