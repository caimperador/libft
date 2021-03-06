/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cverissi <cverissi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 00:23:03 by cverissi          #+#    #+#             */
/*   Updated: 2020/05/30 16:25:59 by cverissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Finds the last occurrence of a character 'c' in the pointed string 's'.
**
**	Parameters
**	----------
**	const char *str: a pointer to the string to parse.
**	int c: element to be located.
**
**	Returns
**	-------
**	A pointer to the to the found character.
*/

char	*ft_strrchr(const char *s, int c)
{
	int		n;
	char	*backup;

	backup = (char *)s;
	n = ft_strlen(backup);
	if (s[n] == '\0' && c == '\0')
		return (&backup[n]);
	while (n--)
	{
		if (s[n] == c)
			return (&backup[n]);
	}
	return (0);
}
