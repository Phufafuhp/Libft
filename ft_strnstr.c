/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phufsomc <phufsomc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 17:45:17 by phufsomc          #+#    #+#             */
/*   Updated: 2026/09/08 16:59:34 by phufsomc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	hay_len;
	size_t	need_len;

	hay_len = ft_strlen(haystack);
	need_len = ft_strlen(needle);
	if (len < need_len || (hay_len == 0 && need_len > 0))
		return (NULL);
	if (hay_len < len)
		len = hay_len;
	if (need_len == 0)
		return ((char *)haystack);
	i = 0;
	while (i <= len - need_len)
	{
		j = 0;
		while (needle[j] && needle[j] == haystack[i + j])
			j++;
		if (j == need_len)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
