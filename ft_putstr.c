/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cverissi <cverissi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 02:07:38 by cverissi          #+#    #+#             */
/*   Updated: 2020/05/30 16:23:04 by cverissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Outputs a given string.
**
**	Parameters
**	----------
**	char *s: the string to be written.
*/

void	ft_putstr(char *str)
{
	if (str != NULL)
	{
		while (*str != '\0')
		{
			ft_putchar(*str);
			str++;
		}
	}
}
