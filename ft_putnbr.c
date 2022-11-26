/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:52:47 by nouahidi          #+#    #+#             */
/*   Updated: 2022/11/10 10:39:08 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	num;

	num = 0;
	if (nb == -2147483648)
	{
		num = num + ft_putchar('-');
		num = num + ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		num = num + ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 0 && nb <= 9)
		num = num + ft_putchar(nb + '0');
	if (nb >= 10)
	{
		num = num + ft_putnbr(nb / 10);
		num = num + ft_putnbr(nb % 10);
	}
	if (num == 0)
		return (1);
	return (num);
}
