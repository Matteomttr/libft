/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 19:52:52 by mamatter          #+#    #+#             */
/*   Updated: 2026/11/04 16:32:52 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Frees a node and all the ones after it. */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*lst_tmp;

	if (!lst || !*lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		lst_tmp = tmp;
		tmp = tmp->next;
		del(lst_tmp->content);
		free(lst_tmp);
	}
	*lst = NULL;
}
