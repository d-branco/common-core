/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main-DO-NOT-DELIVER.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:29:05 by abessa-m          #+#    #+#             */
/*   Updated: 2024/12/21 15:54:40 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//usage:
//	cc get_next_line.c get_next_line.h get_next_line_utils.c *.h -D BUFFER_SIZE=2 && valgrind -s ./a.out
//ou
//	cc *.c *.h && valgrind --leak-check=full --show-leak-kinds=all -s --track-origins=yes ./a.out

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

//NOTAS
// O boonus inclui um header _bonus.h
// Helper functions can be static!

int	main(void)
{
	int		fd;
	char	*line;
	ssize_t	bytes_read;

	fd = open("l.txt", O_RDONLY);
	line = "";
	while (line)
	{
		line = get_next_line(fd);
		if (line)
		{
			printf("%s", line);
			free(line);
		}
	}
	close(fd);
}
