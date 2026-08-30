/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phufsomc <phufsomc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 16:59:22 by phufsomc          #+#    #+#             */
/*   Updated: 2026/08/30 19:05:23 by phufsomc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;
	
	if (!lst || !new)
		return ;
	
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	back = *lst;
	while (back->next)
		(back = back->next);
	back->next = new;
	new->next = NULL;
}
