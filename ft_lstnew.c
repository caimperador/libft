/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cverissi <cverissi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 18:23:13 by cverissi          #+#    #+#             */
/*   Updated: 2020/05/30 16:19:49 by cverissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Allocates memory on the heap to create and insert a new element on a
**	existing Linked List.
**
**	Parameters
**	----------
**	void *content: the content of the newly created element.
**
**	Returns
**	-------
**	The new element.
*/

t_list	*ft_lstnew(void *content)
{
	t_list *new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node != NULL)
	{
		new_node->content = content;
		new_node->next = NULL;
	}
	return (new_node);
}
