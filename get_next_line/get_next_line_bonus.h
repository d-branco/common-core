/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:50:35 by abessa-m          #+#    #+#             */
/*   Updated: 2024/12/05 10:50:57 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

// pre-defines BUFFER_SIZE to 42
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>	// malloc(), free()
# include <unistd.h>	// read()

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
char	*gnl_strjoin(char *s1, char const *s2);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s);

#endif