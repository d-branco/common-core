/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:54:33 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/22 19:29:34 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 1 is TRUE
// 0 is FALSE
char	ft_isalpha(char c)
{
	if (ft_isupper(c) ||  ft_islower(c))
		return (c);
	else
		return (0);
}

// Checks if the char is an uppercase letter
static int	ft_isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c);
	else
		return (0);
}

static int	ft_islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c);
	else
		return (0);
}