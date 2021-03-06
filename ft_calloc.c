/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cverissi <cverissi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 15:35:15 by cverissi          #+#    #+#             */
/*   Updated: 2020/05/30 16:16:21 by cverissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Allocates memory space from the heap, for an array with "count" elements.
**
**	Variables
**	---------
**	size_t count: number of elements in the array.
**	size_t size: size of the elements, in bytes.
**
**	Returns
**	-------
*/

void		*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	bytes;

	bytes = count * size;
	ptr = malloc(bytes);
	if (ptr == 0)
		return (NULL);
	ft_memset(ptr, 0, bytes);
	return (ptr);
}
