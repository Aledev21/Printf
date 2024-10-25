/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:13:25 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/23 20:35:07 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

static int	ft_lenhex(unsigned int num)
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

static void	ft_converthex(unsigned int num, const char formart)
{
	if (num >= 16)
	{
		ft_converthex(num / 16, formart);
		ft_converthex(num % 16, formart);
	}
	else
	{
		if (num <= 9)
		{
			ft_putchar_fd(num + '0', 1);
		}
		else
		{
			if (formart == 'x')
				ft_putchar_fd(num -10 + 'a', 1);
			if (formart == 'X')
				ft_putchar_fd(num - 10 + 'A', 1);
		}
	}
}

int	ft_printhex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_converthex(num, format);
	return (ft_lenhex(num));
}
