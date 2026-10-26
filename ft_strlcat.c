/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:53:10 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/26 15:51:22 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	len = ft_strlen(dst);
	if (len >= size)
		return (size + ft_strlen(src));
	while (i < size - len - 1 && src[i])
	{
		dst[i + len] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	return (ft_strlen(src) + len);
}

// #include <string.h>

// int	main()
// {
// 	char	dest[4] = "tes";
// 	printf("%zu\n", ft_strlcat(dest, NULL, sizeof dest));
// 	printf("%s\n", dest);
// }
