/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 09:12:51 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/25 10:09:01 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	int	i;

	if(!lst || !f || !lst->next)
		return ;
	f(&lst->content);
	ft_lstiter(lst->next, f);
}

void	oupper(void *c)
{
	if ((char)c >= 'a' && (char)c <= 'z')
		c -= 32;
	return ;
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
	ft_lstadd_back(&lst, ft_lstnew("1"));
	ft_lstadd_front(&lst, ft_lstnew("d"));
	ft_lstiter(lst, oupper);
	printC(lst);
	/*
	while (i < 5)
	{
		ft_lstadd_front(&lst, ft_lstnew(str + i));
		i++;
	}*/
	//printC(lst);
}
