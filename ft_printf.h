/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchiodi <cchiodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:50:31 by cchiodi           #+#    #+#             */
/*   Updated: 2024/01/31 12:17:29 by cchiodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_putchar(char c);
int		ft_printnbr(int nbr);
int		ft_printptr(unsigned long long ptr);
int		ft_printuns(unsigned int uns);
int		ft_ptrlen(unsigned long long ptr);
int		ft_hexlen(unsigned int nbr);
int		ft_printhex(unsigned int hex, const char format);
void	ft_puthex(unsigned int hex, const char format);
int		ft_putnbr(long int n);
void	ft_putptr(unsigned long long ptr);
int		ft_putstr(char *str);
int		ft_printf(const char *str, ...);
#endif
