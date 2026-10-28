/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:15:54 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/28 09:28:38 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*buffer;
	unsigned char	replace;

	buffer = s;
	replace = c;
	i = 0;
	while (i != n)
	{
		buffer[i] = replace;
		i++;
	}
	return (buffer);
}
