/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhami <nbenhami@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:52:26 by nbenhami          #+#    #+#             */
/*   Updated: 2024/11/18 04:38:28 by nbenhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putchar(char c, int fd)
{
	write(fd, &c, sizeof(c));
	return (1);
}

int	ft_putstr(char *str, int fd)
{
	if(!str)
	{
		write(fd, "(null)", 6);
		return (6);
	}
	write(fd, str, sizeof(str));
	return(ft_strlen(str));
}

static int	ft_is_valid_base(char *base)
{
	int i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i >= 2);
}

int	ft_putbase(char *base, long long n, int fd)
{
	int		base_len;
	char	c;
	int		count;

	if (!ft_is_valid_base(base))
		return (0);
	base_len = ft_strlen(base);
	count = 0;
	if (n == -2147483648)
	{
		count += ft_putbase(base, n / base_len, fd);
		c = base[-(n % base_len)];
		write(fd, &c, 1);
		return (count + 1);
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		count++;
	}
	if (n >= base_len)
		count += ft_putbase(base, n / base_len, fd);
	c = base[n % base_len];
	write(fd, &c, 1);
	return (count + 1);
}

static int	ft_putbase_x(char *base, int n, int fd)
{
	unsigned int	abs_n;
	int				base_len;
	char			c;
	int				count;

	if (!ft_is_valid_base(base))
		return (0);
	base_len = ft_strlen(base);
	count = 0;

	abs_n = (unsigned int)n; // Convert to unsigned to handle two's complement

	if (abs_n >= (unsigned int)base_len)
		count += ft_putbase_x(base, abs_n / base_len, fd);
	c = base[abs_n % base_len];
	write(fd, &c, 1);
	return (count + 1);
}

int ft_putpointer(void *ptr, int fd)
{
	unsigned long	address;
	int				count;

	address = (unsigned long)ptr;
	count = 0;
	count += ft_putchar('0', fd);
	count += ft_putchar('x', fd); 
	count += ft_putbase("0123456789abcdef", address, fd);
	return count;
}

int	ft_check_format(char c, va_list args)
{
	int	count;

	count = 0;
	switch (c)
	{
	case 's':
		count = ft_putstr((char *)va_arg(args, char *), 1);
		break;
	case 'c':
		count = ft_putchar((char)va_arg(args, int), 1);
		break;
	case 'd':
		count = ft_putbase("0123456789", (int)va_arg(args, int), 1);
		break;
	case 'x':
		count = ft_putbase_x("0123456789abcdef", (int)va_arg(args, int), 1);
		break;
	case 'X':
		count = ft_putbase_x("0123456789ABCDEF", (int)va_arg(args, int), 1);
		break;
	case 'p':
		count = ft_putpointer((void *)va_arg(args, void *), 1);
		break;	
	case '%':
		ft_putchar('%', 1);
		count = 1;
		break;
	default:
		break;
	}
	return (count);
}