/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:27:48 by abessa-m          #+#    #+#             */
/*   Updated: 2024/11/01 12:38:04 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Function name
//		ft_substr
//	Prototype
char	*ft_substr(char const *s, unsigned int start, size_t len);
//	Turn in files
//		-
//	Parameters
//		s: The string from which to create the substring.
//		start: The start index of the substring in the
//		string ’s’.
//		len: The maximum length of the substring.
//		Return value
//		The substring.
//		NULL if the allocation fails.
//	External functs.
//		malloc
//	Description
//		Allocates (with malloc(3)) and returns a substring
//		from the string ’s’.
//		The substring begins at index ’start’ and is of
//		maximum size ’len’.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	ft_strdup(&s[start])
}