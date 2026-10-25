/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 19:52:52 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/25 13:19:00 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temps;
	t_list	*lsd;

	if (!lst || !*lst || !del)
		return ;
	temps = *lst;
	while (temps)
	{
		lsd = temps;
		temps = temps->next;
		del(lsd->content);
		free(lsd);
	}
	*lst = NULL;
}
