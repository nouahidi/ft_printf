/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:46:17 by nouahidi          #+#    #+#             */
/*   Updated: 2022/11/11 15:47:17 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print(char c, va_list arg)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	if (c == 'd' || c == 'i')
		j = j + ft_putnbr(va_arg(arg, int));
	else if (c == 'c')
		j = j + ft_putchar(va_arg(arg, int));
	else if (c == 's')
		j = j + ft_putstr(va_arg(arg, char *));
	else if (c == 'u')
		j = j + ft_putnbr_un(va_arg(arg, unsigned int));
	else if (c == 'x' || c == 'X')
		j = j + ft_putnbr_x(va_arg(arg, unsigned int), c);
	else if (c == 'p')
		j = j + print_ad(va_arg(arg, unsigned long long));
	else if (c == '%')
		j = j + ft_putchar(c);
	else if (c == 'm')
		j = j + ft_putchar(c);
	return (j);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		j;
	va_list	pa;

	i = 0;
	j = 0;
	va_start(pa, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			j = j + ft_print(str[i + 1], pa);
			i++;
		}
		else if (str[i] != '%')
			j = j + ft_putchar(str[i]);
		i++;
	}
	va_end(pa);
	return (j);
}
