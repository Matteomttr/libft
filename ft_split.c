/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 10:07:55 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/26 19:29:56 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static char	*select_str(const char *src, unsigned int start, unsigned int end)
{
	unsigned int	i;
	char			*dest;

	i = 0;
	dest = ft_calloc((end - start + 1), sizeof(char *));
	if (!dest)
		return (NULL);
	while (start + i != end && src[i])
	{
		dest[i] = src[start + i];
		i++;
	}
	return (dest);
}

static char	**free_all(char **lst, int size)
{
	while (size > 0)
	{
		size--;
		free(lst[size]);
	}
	free(lst);
	return (NULL);
}

static char	**fill(char **lst, char const *s, char c)
{
	int	i;
	int	start;
	int	a;

	i = 0;
	a = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			lst[a] = select_str(s, start, i);
			if (!lst[a])
				return(free_all(lst, a));
			a++;
		}
		else
			i++;
	}
	return (lst);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;

	if (!s)
		return (NULL);
	lst = ft_calloc(count_word(s, c) + 1, sizeof(char *));
	if (!lst)
		return (NULL);
	lst = fill(lst, s, c);
	return (lst);
}
