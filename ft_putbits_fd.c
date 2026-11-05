/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbits_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamatter <mamatter@student.42angouleme.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 17:49:58 by mamatter          #+#    #+#             */
/*   Updated: 2026/11/05 18:04:24 by mamatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Writes the binary representation of a character to a file descriptor. */
void	ft_putbits_fd(unsigned char c, int fd)
{
	int		i;
	int		exp;
	float	sum;

	i = 7;
	while (i >= 0)
	{
		exp = 0;
		sum = 0;
		while (exp < i)
		{
			sum += i * 2;
			exp++;
		}
		if (i == 0)
			sum = 1;
		sum /= c;
		if ((int)sum % 10 == 1)
			ft_putchar_fd('1', fd);
		else
			ft_putchar_fd('0', fd);
		i--;
	}
}
