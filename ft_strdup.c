/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phufsomc <phufsomc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 17:41:05 by phufsomc          #+#    #+#             */
/*   Updated: 2026/08/29 15:40:36 by phufsomc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	size;
	char	*dup;
	size_t	i;

	if (!str)
		return (NULL);
	size = 0;
	while (str[size])
	{
		size++;
	}
	dup = malloc(sizeof(char) * size + 1);
	if (!dup)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
