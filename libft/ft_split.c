/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:03:20 by abessa-m          #+#    #+#             */
/*   Updated: 2024/11/03 13:36:23 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Function name
//		ft_split
//	Prototype
//		char **ft_split(char const *s, char c);
//	Turn in files
//		-
//	Parameters
//		s: The string to be split.
//		c: The delimiter character.
//	Return value
//		The array of new strings resulting from the split.
//		NULL if the allocation fails.
//	External functs.
//		malloc, free
//	Description
//		Allocates (with malloc(3)) and returns an array
//		of strings obtained by splitting ’s’ using the
//		character ’c’ as a delimiter. The array must end
//		with a NULL pointer.

#include "libft.h"
// ft_strdup()

char	**ft_split(char const *s, char c)
{
	// ALTERNATIVAMENTE
	// calcula o comprimento sem separadores
	//		aloca uma nova area de memoria
	// calcula o numero de palavras
	//		aloca memoria para o pointer to pointer to char
	// adiciona cada palavra `a nova area de memoria com um NULL terminator
	//		registando o pointer no array
	// the last pointer to pointer is NULL
}

count_words()

