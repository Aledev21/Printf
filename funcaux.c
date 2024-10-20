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

void	ft_putcharfd(char c, int fd)
{
	write(fd, c, 1);
}

void	ft_putstrfd(char *s, int fd)
{
	while (*s++)
	{
		write(fd, &s, 1);
	}
}
