/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main-test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:19:10 by abessa-m          #+#    #+#             */
/*   Updated: 2024/11/15 09:12:59 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int		i;

	ft_printf("FLAG: 8.4 (paddind)\n");
	ft_printf("ft_printf(): <");
	i = ft_printf("4%8.4i", -2);
	printf("> (return: %i)\n   printf(): <", i);
	i = printf("4%8.4i", -2);
	printf("> (return: %i)\n", i);

	ft_printf("FLAG: 8.4 (paddind)\n");
	ft_printf("ft_printf(): <");
	i = ft_printf("4%+8.4i", 2);
	printf("> (return: %i)\n   printf(): <", i);
	i = printf("4%+8.4i", 2);
	printf("> (return: %i)\n", i);

	ft_printf("\n");

	ft_printf("FLAG: .2\n");
	ft_printf("ft_printf(): <");
	i = ft_printf("4%.2i", 2);
	printf("> (return: %i)\n   printf(): <", i);
	i = printf("4%.2i", 2);
	printf("> (return: %i)\n", i);

	ft_printf("FLAG: -\n");
	ft_printf("ft_printf(): <");
	i = ft_printf("4%-i", -2);
	printf("> (return: %i)\n   printf(): <", i);
	i = printf("4%-i", -2);
	printf("> (return: %i)\n", i);

	ft_printf("FLAG: 0\n");
	ft_printf("ft_printf(): <");
	i = ft_printf("4%03i", 2);
	printf("> (return: %i)\n   printf(): <", i);
	i = printf("4%03i", 2);
	printf("> (return: %i)\n", i);
	
	ft_printf("FLAG: .\n");
	ft_printf("ft_printf(): <");
	i = ft_printf("4%.2i", 2);
	printf("> (return: %i)\n   printf(): <", i);
	i = printf("4%.2i", 2);
	printf("> (return: %i)\n", i);
	
	ft_printf("FLAG: (width)\n");
	ft_printf("ft_printf(): <");
	i = ft_printf("4%9i", 2);
	printf("> (return: %i)\n   printf(): <", i);
	i = printf("4%9i", 2);
	printf("> (return: %i)\n", i);


	ft_printf("FLAG: #\n");
	ft_printf("ft_printf(): <");
	i = ft_printf("4%#i", 2);
	printf("> (return: %i)\n   printf(): <", i);
	i = printf("4%#i", 2);
	printf("> (return: %i)\n", i);
	
	ft_printf("FLAG: (space))\n");
	ft_printf("ft_printf(): <");
	i = ft_printf("4% i", 2);
	printf("> (return: %i)\n   printf(): <", i);
	i = printf("4% i", 2);
	printf("> (return: %i)\n", i);
	
	ft_printf("FLAG: +\n");
	ft_printf("ft_printf(): <");
	i = ft_printf("4%+i", 2);
	printf("> (return: %i)\n   printf(): <", i);
	i = printf("4%+i", 2);
	printf("> (return: %i)\n", i);
	
}
