/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchiodi <cchiodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:33:27 by cchiodi           #+#    #+#             */
/*   Updated: 2024/01/31 11:29:18 by cchiodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
	{
		len += ft_putstr("0x0");
		return (len);
	}
	len += ft_putstr("0x");
	len += ft_ptrlen(ptr);
	ft_putptr(ptr);
	return (len);
}
