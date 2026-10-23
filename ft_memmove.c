/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 09:51:55 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/21 10:30:40 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
