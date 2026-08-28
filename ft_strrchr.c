/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phufsomc <phufsomc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 17:47:01 by phufsomc          #+#    #+#             */
/*   Updated: 2026/08/28 17:56:07 by phufsomc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			j = (char *)&str[i];
		}
		i++;
	}
	if (c == 0)
	{
		j = (char *)&str[i];
	}
	if (j != 0)
	{
		return (j);
	}
	return (((void *)0));
}
