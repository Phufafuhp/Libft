/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phufsomc <phufsomc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:11:56 by phufsomc          #+#    #+#             */
/*   Updated: 2026/08/24 17:11:57 by phufsomc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;
    int j;
    int need_len;

    i = 0;
    need_len = ft_strlen(needle);
    while (i <= (int)len - need_len)
    {
        j = 0;
        while (needle[j] && needle[j] == haystack[i + j])
        {
            j++;
        }
        if (haystack[i+j-1] != 0 && needle[j - 1] == haystack[i+j-1])
        {
            return ((char *)&haystack[i]);
        }
        i++;
    }
    return (NULL);
}
