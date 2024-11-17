/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhami <nbenhami@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:34:22 by nbenhami          #+#    #+#             */
/*   Updated: 2024/11/17 01:06:08 by nbenhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_printf(const char *, ...);
int	ft_putchar(char c, int fd);
int	ft_putstr(char *str, int fd);
int	ft_putnumber(int n, int fd);
int	ft_putbase(char *base, char c, int fd);

#endif