/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phufsomc <phufsomc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:11:59 by phufsomc          #+#    #+#             */
/*   Updated: 2026/08/24 17:12:00 by phufsomc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;

    if (dest < src)
    {
        i = 0;
        while (i < n)
        {       
            ((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
            i++;
        }
    } 
    else
    {
        i = n;
        while (i > 0)
        {
            ((unsigned char *)dest)[i-1] = ((const unsigned char *)src)[i-1];
            i--;
        }
    }
}
