/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-ser <juan-ser@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:54:17 by juan-ser          #+#    #+#             */
/*   Updated: 2024/05/14 11:14:31 by juan-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(const char *input, va_list *arg)
{
	int	i;

	i = 0;
	if (*input == 'c')
		i += ft_putchar((char)va_arg(*arg, int));
	else if (*input == 's')
		i += ft_putstr(va_arg(*arg, char *));
	else if (*input == 'X')
		i += ft_putnbr_base(va_arg(*arg, unsigned int), "0123456789ABCDEF");
	else if (*input == 'x')
		i += ft_putnbr_base(va_arg(*arg, unsigned int), "0123456789abcdef");
	else if (*input == 'd' || *input == 'i')
		i += ft_putnbr(va_arg(*arg, int));
	else if (*input == 'u')
		i += ft_putnbr(va_arg(*arg, unsigned int));
	else if (*input == 'p')
		i += ft_pointer(va_arg(*arg, void *));
	else if (*input == '%')
		i += ft_putchar('%');
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;

	i = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			i += check_format(str, &arg);
		}
		else
			i += ft_putchar(*str);
		str++;
	}
	va_end(arg);
	return (i);
}

/*int main()
{
	ft_printf("Hello %s, %d, %c, %x, %X, %u, %p, %i, %d, %%, %c, %s\n", "world", 42, 'a', 42, 42, 42, "Hello world", 42, 42, 'a', "world");
	return (0);
}*/