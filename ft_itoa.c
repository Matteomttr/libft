/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 15:59:22 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/26 15:38:44 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	*ft_rev_int_tab(char *tab, int size)
{
	int		first;
	int		last;
	char	temp;

	first = 0;
	last = size - 1;
	while (first < last)
	{
		temp = tab[first];
		tab[first] = tab[last];
		tab[last] = temp;
		first++;
		last--;
	}
	return (tab);
}

static int	nbrlen(int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
		len++;
	if (nb == 0)
		len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static char	*reelitoa(char *str, int n, int *i, int len)
{
	if (n < 0)
		n = -n;
	while (*i < len)
	{
		if (n == 0)
			str[*i] = '0';
		else
			str[*i] = (n) % 10 + '0';
		n = n / 10;
		*i = *i + 1;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = nbrlen(n);
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (n == -2147483648)
	{
		ft_strcpy(str, "-2147483648");
		return (str);
	}
	str = reelitoa(str, n, &i, len);
	if (n < 0)
		str[i - 1] = '-';
	str = ft_rev_int_tab(str, len);
	return (str);
}
