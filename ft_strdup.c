/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:49:56 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/23 17:13:48 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		len;

	copy = NULL;
	len = ft_strlen(s) + 1;
	copy = malloc(len * sizeof(char));
	if (copy == NULL)
		return (NULL);
	ft_strcpy(copy, s);
	return (copy);
}
