/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caimperador <caimperador@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 13:40:10 by cverissi          #+#    #+#             */
/*   Updated: 2020/05/08 00:47:48 by caimperador      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_str;

	if (!s)
		return (NULL);
	if (!(sub_str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = start;
	while (i < (start + len))
	{
		sub_str[i - start] = s[i];
		i++;
	}
	sub_str[i - start] = '\0';
	return (sub_str);
}
