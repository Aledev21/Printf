/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-20 17:11:33 by aassis-p          #+#    #+#             */
/*   Updated: 2024-10-20 17:11:33 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_printf(const char *s, ...)
{
	va_list	formats;

	va_start(formats, s);

	while(*s)
{
	
	if (s == '%c')
	{
		ft_putcharfd(va_arg(formats, char), 1);
	}
	else if (s == '%s')
	{
		ft_putstrfd(va_arg(formats, int), 1);
	}
	/*else if (s == '%p')
	{
		
	}
	else if (s == '%d')
	{
		
	}*/
}
	va_end(formats);
}
