/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:49:50 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/22 17:17:26 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		delta;

	i = 0;
	delta = 0;
	while (i < s)
	{
		delta = ((unsigned char *)p1)[i] - ((unsigned char *)p2)[i];
		if (delta)
			return (delta);
		i++;
	}
	return (0);
}
