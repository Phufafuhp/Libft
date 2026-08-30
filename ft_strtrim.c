/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phufsomc <phufsomc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 17:47:12 by phufsomc          #+#    #+#             */
/*   Updated: 2026/08/30 19:18:06 by phufsomc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

static size_t	ft_inset(const int c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_trimlen(const char *s1, const char *set, size_t str_len)
{
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_inset(s1[start], set))
		start++;
	end = str_len - 1;
	while (end > 0 && ft_inset(s1[end], set))
		end--;
	if (start > end)
		end = start - 1;
	return (end - start + 1);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	str_len;
	size_t	trim_len;
	size_t	i;
	size_t	j;
	char	*trim;

	if (!s1)
		return (NULL);
	str_len = ft_strlen(s1);
	trim_len = ft_trimlen(s1, set, str_len);
	trim = malloc((trim_len + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	i = 0;
	while (ft_inset(s1[i], set))
		i++;
	j = 0;
	while (j < trim_len)
	{
		trim[j] = s1[i];
		i++;
		j++;
	}
	trim[j] = '\0';
	return (trim);
}
