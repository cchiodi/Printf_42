/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchiodi <cchiodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:28:56 by cchiodi           #+#    #+#             */
/*   Updated: 2024/01/31 10:29:48 by cchiodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printuns(unsigned int uns)
{
	int	len;

	len = 0;
	if (uns == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	len += ft_putnbr(uns);
	return (len);
}
