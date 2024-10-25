/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:09:06 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/23 19:33:46 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *s, ...);
int		ft_printchar(char c);
void	ft_putstr(char *s);
int		ft_printstr(char *str);
int		ft_printper(void);
int		ft_printnbr(int n);
char	*ft_itoaprintf(int n);
int		ft_printunsigned(unsigned int n);
int		ft_printptr(void *ptr);
int		ft_printhex(unsigned int num, const char format);

#endif