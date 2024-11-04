/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_contacts.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:59:23 by abessa-m          #+#    #+#             */
/*   Updated: 2024/10/11 21:16:09 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// Represents a member of the contact list
typedef struct s_contact
{
	char				*name[5 + 1];
	int					number;
	struct s_contact	*next;
}	t_contact;

void	list_print(t_contact *ptr_to_list_beginning);
void	list_free(t_contact **ptr_to_list_beginning);
void	list_insert_at_top(t_contact **top, char *name, int number);
void	list_push(t_contact **top, char *name, int number);
void	list_insert_at_bottom(t_contact **ptr_to_list_beginning,
			char *name, int number);
void	list_enqueue(t_contact **ptr_to_list_beginning,
			char *name, int number);
void	list_remove_at_top(t_contact **top);
void	list_pop(t_contact **top);
void	list_dequeue(t_contact **top);
void	list_remove_at_the_bottom(t_contact **top);
void	list_remove_tail(t_contact **top);

int	main(void)
{
	t_contact	*start;

	printf("A iniciar com um apontador para NULL\n");
	start = NULL;
	list_print(start);
	printf("\nA inserir o primeiro elmento\n");
	list_push(&start, "Julia", 42);
	list_print(start);
	printf("\nA inserir o segundo elmento no topo\n");
	list_insert_at_top(&start, "Eiras", -918765432);
	list_print(start);
	printf("\nA inserir o terceiro elmento no fundo\n");
	list_enqueue(&start, "Sonia", 918273645);
	list_print(start);
	printf("\nA remover o elemento do top e libertar a sua memória\n");
	list_pop(&start);
	list_print(start);
	printf("\nA remover o elemento do fundo e libertar a sua memória\n");
	list_remove_tail(&start);
	list_print(start);
	printf("\nA remover o elemento do fundo e libertar a sua memória\n");
	list_remove_tail(&start);
	list_print(start);
	printf("\nA remover o elemento do topo e libertar a sua memória\n");
	list_pop(&start);
	list_print(start);
	printf("\nA libertar a memória\n");
	list_free(&start);
	list_print(start);

	return (0);
}

void	list_remove_at_top(t_contact **top)
{
	t_contact	*n;

	n = *top;
	if (n != NULL)
	{
		*top = (*n).next;
		free(n);
	}
}

void	list_pop(t_contact **top)
{
	list_remove_at_top(top);
}

void	list_dequeue(t_contact **top)
{
	list_remove_at_top(top);
}

void	list_remove_at_the_bottom(t_contact **top)
{
	t_contact	*n;

	n = *top;
	if (n != NULL)
	{
		if (n->next == NULL && n == *top)
		{
			free(n);
			*top = NULL;
		}
		else
		{
			while (n->next->next != NULL)
			{
				n = n->next;
			}
		}
		free(n->next);
		n->next = NULL;
	}
}

void	list_remove_tail(t_contact **top)
{
	list_remove_at_the_bottom(top);
}

void	list_insert_at_top(t_contact **top, char *name, int number)
{
	t_contact	*n;

	n = (t_contact *) malloc(sizeof(t_contact));
	*((*n).name) = name;
	(*n).number = number;
	(*n).next = *top;
	*top = n;
}

void	list_push(t_contact **top, char *name, int number)
{
	list_insert_at_top(top, name, number);
}

void	list_insert_at_bottom(t_contact **ptr_to_list_beginning,
	char *name, int number)
{
	t_contact	*n;

	if (*ptr_to_list_beginning == NULL)
	{
		n = (t_contact *) malloc(sizeof(t_contact));
		*ptr_to_list_beginning = n;
	}
	else
	{
		n = *ptr_to_list_beginning;
		while (n->next != NULL)
		{
			n = n->next;
		}
		n->next = (t_contact *) malloc(sizeof(t_contact));
		n = n->next;
	}
	*(n->name) = name;
	n->number = number;
	n->next = NULL;
}

void	list_enqueue(t_contact **ptr_to_list_beginning,
			char *name, int number)
{
	list_insert_at_bottom(ptr_to_list_beginning, name, number);
}

void	list_print(t_contact *ptr_to_list_beginning)
{
	t_contact	*ptr;

	ptr = ptr_to_list_beginning;
	printf("|start| a: %p, tamanho %lu bytes\n"
		"        -> %p\n",
		&ptr, sizeof(ptr), ptr);
	while (ptr != NULL)
	{
		printf("|lst|, em: %p, tamanho %lu bytes\n"
			"    name-> %s, tamanho %lu bytes\n"
			"    nmbr-> %d, tamanho %lu bytes\n"
			"    next-> %p, tamanho %lu bytes\n",
			ptr, sizeof(ptr),
			*((*ptr).name), sizeof(*((*ptr).name)),
			(*ptr).number, sizeof((*ptr).number),
			(*ptr).next, sizeof((*ptr).next));
		ptr = (*ptr).next;
	}
}

void	list_free(t_contact **ptr_to_list_beginning)
{
	t_contact	*ptr;
	t_contact	*temp;

	ptr = *ptr_to_list_beginning;
	*ptr_to_list_beginning = NULL;
	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
}
