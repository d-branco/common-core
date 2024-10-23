/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test-libft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:33:40 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/23 13:42:17 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isalpha_test(void);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	else // assuming ft_isalpha.c
	{
		isalpha_test();
	}
}

int	isalpha_test(void)
{
	if (ft_isalpha('a') == 'a')
		printf("isalpha works\n");
	return (0);
}
