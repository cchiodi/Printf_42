/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchiodi <cchiodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:57:38 by cchiodi           #+#    #+#             */
/*   Updated: 2024/01/31 13:29:48 by cchiodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list arg, const char c)
{
	int	print;

	print = 0;
	if (c == 'c')
		print += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		print += ft_putstr(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		print += ft_printnbr(va_arg(arg, int));
	else if (c == 'p')
		print += ft_printptr(va_arg(arg, unsigned long long));
	else if (c == 'u')
		print += ft_printuns(va_arg(arg, unsigned int));
	else if (c == 'x' || c == 'X')
		print += ft_printhex(va_arg(arg, unsigned int), c);
	else if (c == '%')
		print += ft_putchar('%');
	return (print);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_format(arg, str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (len);
}
