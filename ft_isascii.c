/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cverissi <cverissi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 20:11:33 by cverissi          #+#    #+#             */
/*   Updated: 2020/05/30 16:16:55 by cverissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Description
**	-----------
**	Tests a character to see if it is an ASCII character.
**
**	Parameters
**	----------
**	int c: the character to be tested.
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
