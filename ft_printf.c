/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhami <nbenhami@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:35:52 by nbenhami          #+#    #+#             */
/*   Updated: 2024/11/16 18:41:17 by nbenhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	params;
	size_t written_char;

	va_start(params, format);
	written_char = 0;
	while(*format)
	{
		if (*format == '%')
		{
			written_char += check_format(*format++, params);
		}
		else
		{
			ft_putchar(*format);
			written_char++;
		}
		*++format;
	}
	return (written_char);
}