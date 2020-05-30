/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cverissi <cverissi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:28:30 by cverissi          #+#    #+#             */
/*   Updated: 2020/05/30 16:24:54 by cverissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Checks the total length of a string.
**
**	Parameters
**	----------
**	const char *src: A pointer to the string.
**
**	Returns
**	-------
**	The lenght of the string.
*/

size_t		ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*str++ != '\0')
		len++;
	return (len);
}

/*
** --------
** Older implementation without pointer aritmetics
** --------
** 	size_t	i;
** 	i = 0;
** 	while (str[i] != '\0')
** 	{
** 		i++;
** 	}
** 	return (i);
**  }
*/
