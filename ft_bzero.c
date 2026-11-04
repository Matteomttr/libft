/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42angouleme.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:33:29 by mamatter          #+#    #+#             */
/*   Updated: 2026/11/04 16:23:21 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Sets a memory area to zero. */
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*word;

	word = s;
	i = 0;
	while (i != n)
	{
		word[i] = '\0';
		i++;
	}
}
