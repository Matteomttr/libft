/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:11:50 by mamatter          #+#    #+#             */
/*   Updated: 2026/11/04 18:00:40 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Finds the first occurrence of a character in a string. */
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*output;

	i = 0;
	output = (char *)s;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (output + i);
		i++;
	}
	if (s[i] == (char)c)
		return (output + i);
	return (NULL);
}
