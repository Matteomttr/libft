/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:23:06 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/25 15:35:06 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	if (size == 1)
	{
		dest[i] = '\0';
		return (len);
	}
	if (size == 0)
		return (len);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (len);
}

// #include <string.h>

// int	main()
// {
// 	char	dest[4] = "tes";
// 	printf("%zu\n", ft_strlcpy(dest, "hello", 6));
// 	printf("%s\n", dest);
// }
