/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:04:54 by mamatter          #+#    #+#             */
/*   Updated: 2026/11/04 17:07:45 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Finds the last occurrence of a character in a string. */
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*output;

	i = ft_strlen(s);
	output = (char *)s;
	while (i >= 0)
	{
		if (output[i] == (char)c)
			return (output + i);
		i--;
	}
	return (NULL);
}
