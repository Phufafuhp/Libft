/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phufsomc <phufsomc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 17:40:49 by phufsomc          #+#    #+#             */
/*   Updated: 2026/08/28 17:54:58 by phufsomc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_countwords(const char *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			words++;
		}
		i++;
	}
	return (words);
}

static	size_t	ft_wordlen(const char *s, char c, size_t start)
{
	size_t	i;

	i = start;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i - start);
}

static	char	**ft_getarr(const char *s, char c, char **split)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			size = ft_wordlen(s, c, i) + 1;
			split[j] = malloc(size * sizeof(char));
			ft_strlcpy(split[j], s + i, size);
			j++;
			i += size - 2;
		}
		i++;
	}
	split[j] = '\0';
	return (split);
}

char	**ft_split(const char *s, char c)
{
	char	**split;

	split = malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (split == ((void *)0))
	{
		return (((void *)0));
	}
	return (ft_getarr(s, c, split));
}
