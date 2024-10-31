/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 07:01:41 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/31 07:05:50 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	NAME
//		strdup, strndup, strdupa, strndupa - duplicate a string

//	LIBRARY
//		Standard C library (libc, -lc)
//	SYNOPSIS
//	#include <string.h>
//
//		char *strdup(const char *s);
//
//	DESCRIPTION
//		The strdup() function returns a pointer to a new string which is a
//	duplicate of the string s. Memory for the new string is obtained with
//	malloc(3), and can be freed with free(3).

//	RETURN VALUE
//		On success, the strdup() function returns a pointer to the duplicated
//	string. It returns NULL if insufficient memory was available, with errno
//	set to indicate the error.
//
//	ERRORS
//		ENOMEM Insufficient memory available to allocate duplicate string.

char	*ft_strdup(const char *s)
{
	
}
