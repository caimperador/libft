/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cverissi <cverissi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 19:51:05 by cverissi          #+#    #+#             */
/*   Updated: 2020/05/30 16:17:17 by cverissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Tests a character to see if it is a printable character including spaces.
**
**	Parameters
**	----------
**	int c: the character to be tested.
*/

int	ft_isprint(int c)
{
	if (c == '\0')
		return (0);
	else if (ft_isdigit(c) == 1)
		return (1);
	else if (ft_isalpha(c) == 1)
		return (1);
	else if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
