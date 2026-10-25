/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 10:07:55 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/25 12:50:32 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	printf("%d\n", len);
	return (len);
}

static char	*select_str(const char *src, unsigned int start, unsigned int fin)
{
	unsigned int	i;
	char			*dest;

	i = 0;
	dest = ft_calloc((fin - start + 1), sizeof(char *));
	while (start + i != fin && src[i])
	{
		dest[i] = src[start + i];
		i++;
	}
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	int		i;
	int		start;
	int		a;

	i = 0;
	a = 0;
	lst = ft_calloc(count_word(s, c) + 1, sizeof(char *));
	if (!lst || !s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			lst[a] = select_str(s, start, i);
			a++;
		}
		else
			i++;
	}
	return (lst);
}
