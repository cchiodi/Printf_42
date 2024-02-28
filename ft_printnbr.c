/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchiodi <cchiodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:29:58 by cchiodi           #+#    #+#             */
/*   Updated: 2024/01/31 10:30:15 by cchiodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	len += ft_putnbr(nbr);
	return (len);
}
