/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhami <nbenhami@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:52:26 by nbenhami          #+#    #+#             */
/*   Updated: 2024/11/17 01:08:48 by nbenhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c, int fd)
{
	write(fd, &c, sizeof(c));
}

int	ft_putstr(char *str, int fd)
{
	write(fd, str, sizeof(str));
}

int	ft_putnumber(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}

int	ft_putbase(char *base, int n, int fd)
{
	char	c;

	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / sizeof(base), fd);
	c = base[n % 10];
	write(fd, &c, 1);
}