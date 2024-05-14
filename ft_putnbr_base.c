/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-ser <juan-ser@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:19:02 by juan-ser          #+#    #+#             */
/*   Updated: 2024/05/14 12:04:47 by juan-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int n, char *base)
{
	static int		count;
	unsigned int	len_base;

	len_base = ft_strlen(base);
	count = 0;
	if (n >= len_base)
	{
		ft_putnbr_base(n / len_base, base);
		ft_putchar(base[n % len_base]);
	}
	count++;
	ft_putchar(base[n]);
	return (count);
}
