/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 17:37:05 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/24 18:59:37 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst|| !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
void	printC(t_list *lst)
{
	t_list	*temps;

	temps = lst;
	while (temps)
	{
		printf("%s\n", (char *)temps->content);
		temps = temps->next;
	}
}

int	main()
{
	char	str[] = "a";
	int	i = 0;
	t_list	*lst;

	lst = ft_lstnew(str);
	lst->next = ft_lstnew("b");
	lst->next->next = ft_lstnew("c");
	ft_lstadd_back(&lst, ft_lstnew("d"));
	printC(lst);
	/*
	while (i < 5)
	{
		ft_lstadd_front(&lst, ft_lstnew(str + i));
		i++;
	}*/
	//printC(lst);
}
