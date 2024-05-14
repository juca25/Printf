/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-ser <juan-ser@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:00:17 by juan-ser          #+#    #+#             */
/*   Updated: 2024/05/14 13:02:48 by juan-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

int					ft_printf(const char *format, ...);
int					ft_putchar(char c);
int					ft_putstr(char *str);
int					ft_putnbr(int n);
int					ft_putnbr_base(unsigned long n, char *base);
unsigned int		ft_strlen(char *str);
int					ft_pointer(void *ptr);
#endif