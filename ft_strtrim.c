/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:38:07 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/29 16:51:28 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end != start && ft_strchr(set, s1[end]))
		end--;
	i = end - start + 1;
	res = ft_calloc(sizeof(char), i);
	i = 0;
	if (!res)
		return (NULL);
	while (i < end - start + 1)
	{
		res[i] = s1[start + i];
		i++;
	}
	return (res);
}
