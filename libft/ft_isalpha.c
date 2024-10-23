/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:54:33 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/23 10:09:35 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reimplements isalpha()
// `man isalpha`

// 0 is FALSE
// 1 is TRUE
//	c as an int is also considered TRUE
//		as int, by definition, are different from NULL
int	ft_isalpha(int c)
{
	if (ft_isupper(c) ||  ft_islower(c))
		return (c);
	else
		return (0);
}

// Checks if the char is an uppercase letter
static int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c);
	else
		return (0);
}

static int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c);
	else
		return (0);
}
