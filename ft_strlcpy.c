/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:23:06 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/22 14:34:51 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destSize)
{
	size_t	i;

	i = 0;
	while (i < destSize && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (i == destSize && destSize != 0)
		dest[i - 1] = '\0';
	while (src[i])
		i++;
	return (i);
}
