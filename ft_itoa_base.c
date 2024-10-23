/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 01:27:00 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/23 01:17:39 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	*ft_swap(char *str, size_t len)
{
	size_t	start;
	size_t	end;
	char	temp;

	start = 0;
	end = len -1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

static int	int_len(size_t nbr)
{
	size_t count;

	count = 0;
	if (nbr == 0)
	{
		return (1);
	}
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

int	itoa_base(void *hex, int base)
{
	size_t 	i;
	size_t	digit;
	char	*str;
	size_t	adress = (size_t)hex;

	i = 0;
	str = malloc(sizeof(char) * int_len(adress) + 3);
	if (str == NULL)
	{
		return (NULL);
	}
	str[i++] = '0';
    str[i++] = 'x';
	if (adress == 0)
	{
		str[i++] = '0';
	} else { 
	while (adress > 0)
	{
		digit = adress % base;
		if(digit < 10)
		{
			str[i++] = '0' + digit;
		}
		else
		{
			str[i++] = 'a' + (digit - 10);
		}
		adress /= base;
	}
	}
	str[i] = '\0';
	ft_swap(str + 2, i - 2);
	return (str);
}
