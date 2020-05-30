/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cverissi <cverissi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:40:18 by cverissi          #+#    #+#             */
/*   Updated: 2020/05/30 16:26:54 by cverissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Description
**	-----------
**	Converts lowercase characters to uppercase ones.
**
**	Parameters
**	----------
**	int c: the character to be converted.
*/

int	ft_toupper(int c)
{
	if (c == '\0')
		return (0);
	else if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}
