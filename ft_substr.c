/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phufsomc <phufsomc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 17:47:25 by phufsomc          #+#    #+#             */
/*   Updated: 2026/08/28 17:56:12 by phufsomc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (str == ((void *)0) || len <= 0 || (size_t)start > ft_strlen(str))
	{
		return (((void *)0));
	}
	sub = malloc((len + 1) * len);
	if (sub == ((void *)0))
	{
		return (((void *)0));
	}
	i = 0;
	while (i < len)
	{
		sub[i] = str[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
