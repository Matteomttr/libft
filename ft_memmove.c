/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 09:51:55 by mamatter          #+#    #+#             */
/*   Updated: 2026/11/04 16:39:30 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copies bytes and handles overlapping areas safely. */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*source;

	dst = dest;
	source = (unsigned char *)src;
	if (dst > source)
	{
		while (n)
		{
			n--;
			dst[n] = source[n];
		}
	}
	else
		ft_memcpy(dst, source, n);
	return (dst);
}
