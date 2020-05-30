/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cverissi <cverissi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 01:33:55 by cverissi          #+#    #+#             */
/*   Updated: 2020/05/30 16:21:52 by cverissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Outputs a given character.
**
**	Parameters
**	----------
**	char c: the character to be outputed.
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
