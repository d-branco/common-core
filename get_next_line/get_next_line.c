/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:20:57 by abessa-m          #+#    #+#             */
/*   Updated: 2024/11/19 10:29:46 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Function name
//		get_next_line
//	Prototype
//		char *get_next_line(int fd);
//	Turn in files
//		get_next_line.c, get_next_line_utils.c,
//		get_next_line.h
//	Parameters
//		fd: The file descriptor to read from
//	Return value
//		Read line: correct behavior
//		NULL: there is nothing else to read, or an error occurred
//	External functs.
//		read, malloc, free
//	Description
//		Write a function that returns a line read from a file descriptor

#include "get_next_line.h"

// ssize_t	read(int fd, void *buf, size_t count);
char	*get_next_line(int fd)
{
	char	*buffer;
	int		n_bytes_read;
	
	buffer = (char *) calloc(sizeof(char), (BUFFER_SIZE + 2));
	if (!buffer)
		return (NULL);
	n_bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (n_bytes_read <= 0)
	{
		free(buffer);
		return (NULL);
	}
	buffer[BUFFER_SIZE] = '|';
	buffer[BUFFER_SIZE + 1] = '\0';
	return (buffer);
}
 