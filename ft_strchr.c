/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phufsomc <phufsomc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 17:40:59 by phufsomc          #+#    #+#             */
/*   Updated: 2026/08/30 17:03:12 by phufsomc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	chr;

	if (!str)
		return (NULL);
	i = 0;
	chr = c;
	while (str[i])
	{
		if (str[i] == chr)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if (chr == 0)
	{
		return ((char *)&str[i]);
	}
	return (NULL);
}
