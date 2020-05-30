/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cverissi <cverissi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 14:49:05 by cverissi          #+#    #+#             */
/*   Updated: 2020/05/30 16:22:17 by cverissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Outputs a string followed by a new line (\n) after its end.
**
**	Parameters
**	----------
**	char *s: the string to output
*/

void	ft_putendl(char *s)
{
	if (s != 0)
	{
		while (*s)
		{
			write(1, &*s, 1);
			s++;
		}
		write(1, "\n", 1);
	}
}
