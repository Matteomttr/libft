/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 14:48:12 by mamatter          #+#    #+#             */
/*   Updated: 2026/11/18 17:48:53 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Adds a node at the start of the list. */
void	ft_lstadd_front(t_list **lst, t_list *new_lst)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
