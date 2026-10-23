/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:04:54 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/23 14:20:51 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (c == 0)
		return ("");
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			k = i;
		}
		i++;
	}
	return (&(((char *)s)[k]));
}
