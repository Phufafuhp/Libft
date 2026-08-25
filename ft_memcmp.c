/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phufsomc <phufsomc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:12:00 by phufsomc          #+#    #+#             */
/*   Updated: 2026/08/24 17:12:01 by phufsomc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    while (((unsigned char*)s1)[i] == ((unsigned char *)s2)[i] && i < n)
    {
        i++;
    }
    return (((unsigned char*)s1)[i] - ((unsigned char *)s2)[i]);
}
