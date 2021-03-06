/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cverissi <cverissi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 15:00:55 by cverissi          #+#    #+#             */
/*   Updated: 2020/05/30 16:17:52 by cverissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description
** -----------
** Adds a 'new' element to the beginning of the linked list and rearrange
** the pointers so the head of the list points to newly added element.
**
** Parameters
** ----------
** t_list **lst: a pointer to the first link of the list.
** t_list *new: a pointer to the element to be added.
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tail;

	tail = ft_lstlast(*lst);
	if (tail != NULL)
		tail->next = new;
	else
		*lst = new;
}
