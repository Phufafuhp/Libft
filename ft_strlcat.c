/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phufsomc <phufsomc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 17:42:58 by phufsomc          #+#    #+#             */
/*   Updated: 2026/08/28 17:55:13 by phufsomc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;

	dest_len = ft_strlen(dest);
	i = dest_len;
	while (i < size - 1)
	{
		dest[i] = src[i - dest_len];
		i++;
	}
	dest[i] = '\0';
	if (dest[size - 1] != '\0')
	{
		return (size);
	}
	return (ft_strlen(dest) + ft_strlen(src));
}
