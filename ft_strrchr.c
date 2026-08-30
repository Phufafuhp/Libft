/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phufsomc <phufsomc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 17:47:01 by phufsomc          #+#    #+#             */
/*   Updated: 2026/08/30 17:21:08 by phufsomc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	chr;
	int		i;
	char	*j;

	chr = c;
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == chr)
			j = (char *)&str[i];
		i++;
	}
	if (chr == 0)
		j = (char *)&str[i];
	if (j != 0)
		return (j);
	return (NULL);
}
