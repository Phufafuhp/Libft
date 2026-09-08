/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phufsomc <phufsomc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 17:42:58 by phufsomc          #+#    #+#             */
/*   Updated: 2026/09/08 16:24:25 by phufsomc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <linux/limits.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size < dest_len)
		return (size + src_len);
	i = dest_len;
	if (size == 0)
		return (src_len + dest_len);
	while (src[i - dest_len] && i < size - 1)
	{
		dest[i] = src[i - dest_len];
		i++;
	}
	dest[i] = '\0';
	return (src_len + dest_len);
}
