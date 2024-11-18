/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhami <nbenhami@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:34:22 by nbenhami          #+#    #+#             */
/*   Updated: 2024/11/17 22:47:55 by nbenhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_printf(const char *, ...);
int	ft_putchar(char c, int fd);
int	ft_putstr(char *str, int fd);
int	ft_putbase(char *base, long long n, int fd);
int ft_putpointer(void *ptr, int fd);
int	ft_check_format(char c, va_list args);

#endif