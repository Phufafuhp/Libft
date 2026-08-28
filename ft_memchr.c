/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phufsomc <phufsomc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:12:00 by phufsomc          #+#    #+#             */
/*   Updated: 2026/08/24 17:12:01 by phufsomc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t	i;

    i = 0;
    while (i < n)
    {
        if (((unsigned char *)s)[i] == c)
        {
            return (&((unsigned char *)s)[i]);
        }
        i++;
    }
    return (((void *)0));
}
