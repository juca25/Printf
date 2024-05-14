/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-ser <juan-ser@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:19:02 by juan-ser          #+#    #+#             */
/*   Updated: 2024/05/14 14:29:39 by juan-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long n, char *base)
{
	unsigned long		count;
	unsigned long		len_base;

	len_base = ft_strlen(base);
	count = 0;
	if (n >= len_base)
	{
		count += ft_putnbr_base(n / len_base, base);
		count += ft_putchar(base[n % len_base]);
	}
	else
		count += ft_putchar(base[n]);
	return (count);
}
