/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 10:07:55 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/23 14:16:26 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			len++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	printf("%d", len);
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;

	lst = ft_calloc(count_word(s, c), sizeof(char *));
	if (!lst)
		return (NULL);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	char	**lst;
	int	i = 0;
	(void)argc;

	lst = ft_split(argv[1], ' ');
	while (lst[i] != NULL)
	{
		printf("%s\n", lst[i]);
		free(lst[i]);
		i++;
	}
	free(lst);
	return (0);
}
