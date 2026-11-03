/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:01:42 by mamatter          #+#    #+#             */
/*   Updated: 2026/11/03 13:28:00 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		size_str;

	if (!s1 || !s2)
		return (NULL);
	size_str = ft_strlen(s1) + ft_strlen(s2);
	str = ft_calloc(sizeof(char), size_str + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strcat(str, (char *)s1);
	str = ft_strcat(str, (char *)s2);
	return (str);
}
