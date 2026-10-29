/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:49:50 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/29 11:09:55 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		delta;

	i = 0;
	delta = 0;
	while (i < n)
	{
		delta = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		if (delta)
			return (delta);
		i++;
	}
	return (0);
}
