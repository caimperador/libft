/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cverissi <cverissi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 15:15:28 by cverissi          #+#    #+#             */
/*   Updated: 2020/05/30 16:19:26 by cverissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Returns the last element of a linked list.
**
**	Parameters
**	----------
**	t_list *lst: the head of the linked list.
**
**	Returns
**	-------
**	The last element of the linked list.
*/

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == 0)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
