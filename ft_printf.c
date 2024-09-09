/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-ser <juan-ser@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:54:17 by juan-ser          #+#    #+#             */
/*   Updated: 2024/09/09 12:04:55 by juan-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(char imput, va_list *arg)
{
	int	i;

	i = 0;
	if (imput == 'c')
		i += ft_putchar((char)va_arg(*arg, int));
	else if (imput == 's')
		i += ft_putstr(va_arg(*arg, char *));
	else if (imput == 'X')
		i += ft_putnbr_base(va_arg(*arg, unsigned int), "0123456789ABCDEF");
	else if (imput == 'x')
		i += ft_putnbr_base(va_arg(*arg, unsigned int), "0123456789abcdef");
	else if (imput == 'd' || imput == 'i')
		i += ft_putnbr(va_arg(*arg, int));
	else if (imput == 'u')
		i += ft_putnbr_base(va_arg(*arg, unsigned int), "0123456789");
	else if (imput == 'p')
		i += ft_pointer(va_arg(*arg, void *));
	else if (imput == '%')
		i += ft_putchar('%');
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list			arg;
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	va_start(arg, str);
	while (str[i] != 0)
	{
		if (str[i] == '%')
		{
			count += check_format(str[i + 1], &arg);
			i++;
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (count);
}