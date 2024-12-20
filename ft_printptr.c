/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:04:52 by aassis-p          #+#    #+#             */
/*   Updated: 2024/11/02 06:33:33 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static void	ft_putchar_fdd(char c, int fd)
{
	write(fd, &c, 1);
}

static int	ptrlen(unsigned long long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_convert(unsigned long long num)
{
	if (num >= 16)
	{
		ft_convert(num / 16);
		ft_convert(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fdd((num + '0'), 1);
		else
			ft_putchar_fdd((num - 10 + 'a'), 1);
	}
}

int	ft_printptr(void *ptr)
{
	unsigned int					len;
	unsigned long long				hexptr;

	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	hexptr = (unsigned long long)ptr;
	len = 0;
	len += write(1, "0x", 2);
	if (hexptr == 0)
		len += write(1, "0", 1);
	else
	{
		ft_convert(hexptr);
		len += ptrlen(hexptr);
	}
	return (len);
}
