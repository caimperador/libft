/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cverissi <cverissi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:42:46 by cverissi          #+#    #+#             */
/*   Updated: 2020/05/30 16:17:06 by cverissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Description
**	-----------
**	Tests a character to see if it is a decimal digit.
**
**	Parameters
**	----------
**	int c: the character to be tested.
*/

int	ft_isdigit(long long c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
