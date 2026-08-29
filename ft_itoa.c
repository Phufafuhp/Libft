/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phufsomc <phufsomc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 17:37:15 by phufsomc          #+#    #+#             */
/*   Updated: 2026/08/29 15:48:20 by phufsomc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len++;
	}
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*ft_getarr(int n, char *a, size_t size)
{
	size_t	i;
	long	nb;

	i = size - 2;
	nb = n;
	a[i + 1] = '\0';
	if (n == 0)
	{
		a[0] = '0';
		a[1] = '\0';
		return (a);
	}
	if (nb < 0)
	{
		a[0] = '-';
		nb *= -1;
	}
	while (nb != 0)
	{
		a[i] = '0' + (nb % 10);
		i--;
		nb /= 10;
	}
	return (a);
}

char	*ft_itoa(int n)
{
	char	*a;
	size_t	size;

	size = ft_intlen(n) + 1;
	a = malloc(size * sizeof(char));
	if (!a)
		return (NULL);
	return (ft_getarr(n, a, size));
}
