/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-ser <juan-ser@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:34:39 by juan-ser          #+#    #+#             */
/*   Updated: 2024/05/14 14:32:09 by juan-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(void *ptr)
{
	unsigned int	count;

	count = 0;
	count += ft_putstr("0x");
	count += ft_putnbr_base((unsigned long)ptr, "0123456789abcdef");
	return (count);
}
