/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:11:33 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/23 00:36:41 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_printf(const char *s, ...)
{
	size_t	i;
	va_list	formats;

	va_start(formats, s);
	i = 0;
	while(s[i])
{
	
	if (s == '%c')
	{
		ft_putchar(va_arg(formats, int));
	}
	else if (s == '%s')
	{
		ft_putstr(va_arg(formats, int));
	}
	else if (s == '%p')
	{
		ft_itoabase(va_arg(formats, int));	
	}
	else if (s == '%d')
	{
		
	}
}
	return (i);
	va_end(formats);
}
