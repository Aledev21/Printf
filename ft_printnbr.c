/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:48:00 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/23 17:01:22 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	printnbr(int n)
{
	int		len;
	char	*num;
	
	len = 0;
	num = ft_itoaprintf(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}