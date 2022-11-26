/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ad.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:28:11 by nouahidi          #+#    #+#             */
/*   Updated: 2022/11/09 23:29:00 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_ad(unsigned long nb)
{
	if (nb >= 16)
	{
		ft_putnbr_ad(nb / 16);
		ft_putnbr_ad(nb % 16);
	}
	else
	{
		if (nb <= 9)
			ft_putchar(nb + '0');
		else
			ft_putchar(nb - 10 + 'a');
	}
}

static int	ft_len_ad(unsigned long pt)
{
	int	i;

	i = 0;
	while (pt > 0)
	{
		pt = pt / 16;
		i++;
	}
	return (i);
}

int	print_ad(unsigned long long ap)
{
	int	i;

	i = 0;
	i = i + write (1, "0x", 2);
	if (ap == 0)
		i = i + write (1, "0", 1);
	else
	{
		ft_putnbr_ad(ap);
		i = i + ft_len_ad(ap);
	}
	return (i);
}
