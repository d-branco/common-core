/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:30:02 by abessa-m          #+#    #+#             */
/*   Updated: 2024/11/05 16:34:36 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	Function name
//		ft_lstmap
//	Prototype
//		t_list *ft_lstmap
//			(t_list *lst, void *(*f)(void *), void (*del)(void *));
//	Turn in files
//		-
//	Parameters
//		lst: The address of a pointer to a node.
//		f: The address of the function used to iterate on the list.
//		del: The address of the function used to delete the content of a node
//	if needed.
//	Return value
//		The new list.
//		NULL if the allocation fails.
//	External functs.
//		malloc, free
//	Description
//		Iterates the list ’lst’ and applies the function ’f’ on the content of
//	each node. Creates a new list resulting of the successive applications of
//	the function ’f’. The ’del’ function is used to delete the content of a
//	node if needed.

#include "libft.h"
//	t_list, ft_lstnew, ft_lsclear, ft_lstadd_back

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!f || !del || !lst)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			del(new_node->content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
