/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:11:50 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/26 12:07:05 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
