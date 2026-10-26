/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:53:10 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/26 12:17:17 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(dst);
	if (len >= size || !src)
		return (ft_strlen(src) + len);
	while (i < size - len - 1 && src[i])
	{
		dst[i + len] = src[i];
		i++;
	}
	if (size != 0)
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
