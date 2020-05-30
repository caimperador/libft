/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cverissi <cverissi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 02:09:41 by cverissi          #+#    #+#             */
/*   Updated: 2020/05/30 16:22:54 by cverissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Outputs a given string to a given file descriptor.
**
**	Parameters
**	----------
**	char *s - the string to output
**	int fd - the file descriptor on which to write
*/

void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
	{
		while (*s != '\0')
		{
			ft_putchar_fd(*s, fd);
			s++;
		}
	}
}
