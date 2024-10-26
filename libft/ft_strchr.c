/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:27:08 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/26 11:03:35 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Emulates strchr from libc

// DESCRIPTION
//		The strchr() function returns a pointer to the first occurrence of
//	the character c in the string s.
//
//		Here "character" means "byte"; these functions do not work with wide
//	or multibyte characters.

// RETURN VALUE
//		The strchr() functiom returns a pointer to the matched character or
//	NULL if the character is not found. The terminating null byte is
//	considered part of the string, so that if c is specified as '\0', this
//	function returns a pointer to the terminator.

// NOTES
// ptr has to be static so that it can be used by main outside this function.
char	*strchr(const char *s, int c)
{
	int			j;
	static char	ptr[1];

	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			*ptr = s[j];
			return (ptr);
		}
		j++;
	}
	if ((s[j] == '\0') && (c == '\0'))
		*ptr = s[j];
	else
		*ptr = 0;
	return (ptr);
}
