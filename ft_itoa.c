/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 15:59:22 by mamatter          #+#    #+#             */
/*   Updated: 2026/10/23 17:08:20 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	int		j;

	i = 0;
	j = 0;
	len = nbrlen(n);
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (n == -2147483648)
		str = "-2147483648";
	if (n < 0)
	{
		j = 1;
		n = -n;
	}
	str = reelitoa(str, n, &i, len);
	if (j == 1)
		str[i - 1] = '-';
	str = ft_rev_int_tab(str, len);
	return (str);
}

int	main()
{
	char	*str;
	int	nb = -1623751341;
	str = ft_itoa(nb);
	printf("%s", str);
	free(str);
}
