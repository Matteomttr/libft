/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:15:54 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/29 11:16:14 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*buffer;
	unsigned char	rpc;

	buffer = s;
	rpc = c;
	i = 0;
	while (i != n)
	{
		buffer[i] = rpc;
		i++;
	}
	return (buffer);
}
