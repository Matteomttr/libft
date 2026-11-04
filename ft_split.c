/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 10:07:55 by mamatter          #+#    #+#             */
/*   Updated: 2026/11/04 17:59:06 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* Returns the number of words using a separator */
static int	count_word(char const *s, char c)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	if (!s)
		return (0);
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
	return (len);
}

/* Free all instances in the array */
static char	**free_all(char **lst, int size)
{
	while (size > 0)
	{
		size--;
		free(lst[size]);
	}
	free(lst);
	return (lst);
}

/* Create an array containing the words */
static char	**fill(char **lst, char const *s, char c, int i)
{
	int	start;
	int	a;

	a = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i += 1;
			lst[a] = ft_substr(s, start, i - start);
			if (!lst[a])
			{
				lst = free_all(lst, a);
				return (NULL);
			}
			a++;
		}
		else
			i += 1;
	}
	return (lst);
}

/* Cuts a string at each delimiter and returns an array of strings. */
char	**ft_split(char const *s, char c)
{
	char	**lst;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	lst = ft_calloc(count_word(s, c) + 1, sizeof(char *));
	if (!lst)
		return (NULL);
	lst = fill(lst, s, c, i);
	return (lst);
}
