/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:26:06 by abessa-m          #+#    #+#             */
/*   Updated: 2024/11/02 15:40:07 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Function name
//		ft_striteri
//	Prototype
//		void ft_striteri(char *s, void (*f)(unsigned int, char*));
//	Turn in files
//		-
//	Parameters
//		s: The string on which to iterate.
//		f: The function to apply to each character.
//	External functs.
//		None
//	Return value
//		None
//	Description
//		Applies the function ’f’ on each character of the string passed as
//	argument, passing its index as first argument. Each character is passed by
//	address to ’f’ to be modified if necessary.

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	pos;

	pos = 0;
	while (s[pos] != '\0')
	{
		s[pos] = f(pos, &s[pos]);
		pos++;
	}
}
