/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cverissi <cverissi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 15:17:40 by cverissi          #+#    #+#             */
/*   Updated: 2020/05/30 16:16:09 by cverissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Writes zeroes in the place of bytes.
**
**	Parameters
**	----------
***	void *s: string to be filled.
**	size_t n: number of bytes to fill.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
