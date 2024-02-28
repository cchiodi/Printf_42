/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchiodi <cchiodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:14:41 by cchiodi           #+#    #+#             */
/*   Updated: 2024/01/31 13:02:00 by cchiodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int hex, const char format)
{
	if (hex == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
		ft_puthex(hex, format);
	return (ft_hexlen(hex));
}
