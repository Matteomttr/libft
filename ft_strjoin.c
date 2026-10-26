/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:01:42 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/26 19:46:23 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		size_str;

	if (!s1 || !s2)
		return (NULL);
	size_str = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(size_str);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, size_str);
	str = ft_strcat(str, (char *)s1);
	str = ft_strcat(str, (char *)s2);
	str[size_str] = '\0';
	return (str);
}
