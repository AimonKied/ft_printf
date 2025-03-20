/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swied <swied@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:39:19 by swied             #+#    #+#             */
/*   Updated: 2025/03/19 18:53:28 by swied            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_x(int n)
{
	int				digits;
	char			*decimal;
	unsigned int	nb;

	decimal = "0123456789abcdef";
	digits = 0;
	nb = (unsigned int)n;
	if (nb == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (nb >= 16)
		digits += ft_x(nb / 16);
	digits++;
	ft_putchar(decimal[nb % 16]);
	return (digits);
}
