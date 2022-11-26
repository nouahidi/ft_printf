/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:17:34 by nouahidi          #+#    #+#             */
/*   Updated: 2022/11/10 10:21:52 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

int				ft_printf(const char *str, ...);
int				ft_putnbr(int nb);
int				ft_putchar(char c);
int				ft_putstr(char *s);
int				ft_putnbr_un(unsigned int nb);
unsigned int	ft_putnbr_x(unsigned int nb, char c);
int				print_ad(unsigned long long ap);

#endif