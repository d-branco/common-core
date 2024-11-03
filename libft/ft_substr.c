/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:27:48 by abessa-m          #+#    #+#             */
/*   Updated: 2024/11/02 09:53:28 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Function name
//		ft_substr
//	Prototype
//		char	*ft_substr(char const *s, unsigned int start, size_t len);
//	Turn in files
//		-
//	Parameters
//		s: The string from which to create the substring.
//		start: The start index of the substring in the
//		string ’s’.
//		len: The maximum length of the substring.
//	Return value
//		The substring.
//		NULL if the allocation fails.
//	External functs.
//		malloc
//	Description
//		Allocates (with malloc(3)) and returns a substring
//		from the string ’s’.
//		The substring begins at index ’start’ and is of
//		maximum size ’len’.

#include "libft.h"
// NULL, ft_strlcpy, 

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;

	if (!s)
		return (NULL);
	new = ft_calloc(len + 1, sizeof(char));
	if (!new)
		return (NULL);
	ft_strlcpy(new, &s[start], len + 1);
	return (new);
}
