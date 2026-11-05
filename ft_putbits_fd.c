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
	int	i;
	int	exp;
	int	sum;

	i = 7;
	while (i >= 0)
	{
		exp = 0;
		sum = 1;
		while (exp < i)
		{
			sum *= 2;
			exp++;
		}
  sum /= c;
		if (sum % 2 == 1)
			ft_putchar_fd('1', fd);
		else
			ft_putchar_fd('0', fd);
		i--;
	}
}
