/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:22:41 by nouahidi          #+#    #+#             */
/*   Updated: 2022/11/09 23:23:23 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_un(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb >= 0 && nb <= 9)
	{
		i = i + ft_putchar(nb + '0');
	}
	if (nb >= 10)
	{
		i = i + ft_putnbr_un(nb / 10);
		i = i + ft_putnbr_un(nb % 10);
	}
	return (i);
}
