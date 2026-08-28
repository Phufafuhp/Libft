/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phufsomc <phufsomc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 17:36:53 by phufsomc          #+#    #+#             */
/*   Updated: 2026/08/28 17:54:01 by phufsomc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
	{
		return (((void *)0));
	}
	ptr = malloc(nmemb * size);
	if (ptr == ((void *)0))
	{
		return (((void *)0));
	}
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
