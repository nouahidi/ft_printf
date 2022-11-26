/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:25:17 by nouahidi          #+#    #+#             */
/*   Updated: 2022/11/09 23:26:38 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putnbr_x(unsigned int nb, char c)
{
	int	i;

	i = 0;
	if (nb >= 16)
	{
		i = i + ft_putnbr_x(nb / 16, c);
		i = i + ft_putnbr_x(nb % 16, c);
	}
	else
	{
		if (nb <= 9)
			i = i + ft_putchar(nb + '0');
		else
		{
			if (c == 'x')
				i = i + ft_putchar(nb - 10 + 'a');
			else if (c == 'X')
				i = i + ft_putchar(nb - 10 + 'A');
		}
	}
	return (i);
}
