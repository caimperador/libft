/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cverissi <cverissi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:17:21 by cverissi          #+#    #+#             */
/*   Updated: 2020/05/30 16:26:45 by cverissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Description
**	-----------
**	Converts uppercase characters to lowercase ones.
**
**	Parameters
**	----------
**	int c: the character to be converted.
*/

int	ft_tolower(int c)
{
	if (c == '\0')
		return (0);
	else if (c >= 'A' && c <= 'Z')
		return (c - ('A' - 'a'));
	return (c);
}
