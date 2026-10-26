/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:04:54 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/26 12:13:59 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
