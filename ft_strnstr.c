/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phufsomc <phufsomc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 17:45:17 by phufsomc          #+#    #+#             */
/*   Updated: 2026/08/30 17:18:47 by phufsomc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	need_len;

	i = 0;
	need_len = ft_strlen(needle);
	if (need_len == 0)
		return ((char *)haystack);
	while (i <= len - need_len)
	{
		j = 0;
		while (needle[j] && needle[j + 1] == haystack[i + j + 1])
		{
			j++;
		}
		if (j == need_len)
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
