/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchiodi <cchiodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:00:29 by cchiodi           #+#    #+#             */
/*   Updated: 2024/01/31 16:12:51 by cchiodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int hex, const char format)
{
	unsigned int	u;

	u = hex;
	if (hex >= 16)
	{
		ft_puthex(hex / 16, format);
		u = hex % 16;
	}
	if (u >= 10)
	{
		if (format == 'x')
			ft_putchar(u - 10 + 'a');
		else if (format == 'X')
			ft_putchar(u - 10 + 'A');
	}
	else
		ft_putchar(u + 48);
}
