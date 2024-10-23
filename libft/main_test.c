/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:33:40 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/23 19:21:00 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include "libft.h"

static int	test_isalpha();
static int	test_isdigit();

int	main(int argc, char **argv)
{
	int	i;
	int	aval;

	i = 1;
	aval = 0;
	while (i < argc)
	{
		if (!strcmp(argv[i], "ft_isalpha.c"))
			aval = test_isalpha();
		if (!strcmp(argv[i], "ft_isdigit.c"))
			aval = test_isdigit();


		if (aval == 1)
			printf("\033[0;32m%s: all tests cleared\033[0m\n", argv[i]);
		else if (aval == 0)
			printf("\033[0;93m%s: has no test yet!\033[0m\n", argv[i]);
		else
			printf("\033[41m%s: test(s) failed\033[0m\n", argv[i]);
		i++;
	}
}

static int	test_isdigit()
{
	if
		((ft_isdigit('0') == '0')
		&& (ft_isdigit('4') == '4')
		&& (ft_isdigit('k') == 0))
		return (1);
	return (-1);
}


static int	test_isalpha()
{
	if
		((ft_isalpha('a') == 'a')
		&& (ft_isalpha('D') == 'D'))
		return (1);
	return (-1);
}
