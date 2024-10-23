/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:04:06 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/23 18:54:17 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_formats(va_list args, const char str)
{
	size_t	len;

	len = 0;
	if (str == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (str == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (str == 'p')
		len += ft_printptr(va_arg(args, unsigned long long));
	else if (str == 'd' || str == 'i')
		len += ft_printnbr(va_arg(args, int));
	else if (str == 'u')
		len += ft_printunsigned(va_arg(args, unsigned int));
	else if (str == 'x' || str == 'X')
		len += ft_printhex(va_arg(args, unsigned int), str);
	else if (str == '%')
		len += ft_printper();
	return (len);
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	va_list	args;
	size_t	len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			len += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
