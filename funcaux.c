/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcaux.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-20 19:10:39 by aassis-p          #+#    #+#             */
/*   Updated: 2024-10-20 19:10:39 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_putcharfd(char c)
{
	write(1, c, 1);
	return (1);
}

int	ft_putstr(char *s)
{	size_t	i;

	i = 0;
	while (s[i++])
	{
		write(1, &s, 1);
	}
	return (i);
}
