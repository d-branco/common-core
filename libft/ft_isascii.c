/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:49:01 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/24 17:49:56 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks whether c is a 7-bit unsigned char value that  fits  into
//	the ASCII character set.

// checks if the character is between 0 and 127 inclusive.
int	ft_isascii(int chr)
{
	if (chr >= 0 && chr <= 127)
		return (1);
	return (0);
}
