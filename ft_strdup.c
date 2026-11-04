/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:49:56 by mamatter          #+#    #+#             */
/*   Updated: 2026/11/04 16:54:55 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Returns a new copy of a string. */
char	*ft_strdup(const char *s)
{
	char	*copy;
	int		len;

	len = ft_strlen(s) + 1;
	copy = malloc(len * sizeof(char));
	if (copy == NULL)
		return (NULL);
	ft_strcpy(copy, s);
	return (copy);
}
