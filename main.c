/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhami <nbenhami@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:03:57 by nbenhami          #+#    #+#             */
/*   Updated: 2024/11/19 20:08:39 by nbenhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h" // Include your ft_printf header here

int	main(void)
{
	int		num = 42;
	char	c = 'A';
	char	*str = "Hello, World!";
	void	*ptr = (void *)&num;
	unsigned int u_num = 3000000000;
	int		total_printf = 0;
	int		total_ft_printf = 0;

	// %c - Single character
	total_printf += printf("1 c: [%c]\n", c);
	total_ft_printf += ft_printf("2 c: [%c]\n", c);
	printf("printf = %d || ft_printf = %d\n", total_printf, total_ft_printf);
	printf("=============\n\n");

	// %s - String
	total_printf += printf("1 s: [%s]\n", str);
	total_ft_printf += ft_printf("2 s: [%s]\n", str);
	printf("printf = %d || ft_printf = %d\n", total_printf, total_ft_printf);
	printf("=============\n\n");

	// %p - Pointer
	total_printf += printf("1 p: [%p]\n", ptr);
	total_ft_printf += ft_printf("2 p: [%p]\n", ptr);
	printf("printf = %d || ft_printf = %d\n", total_printf, total_ft_printf);
	printf("=============\n\n");

	// %d - Decimal number
	total_printf += printf("1 d: [%d]\n", num);
	total_ft_printf += ft_printf("2 d: [%d]\n", num);
	printf("printf = %d || ft_printf = %d\n", total_printf, total_ft_printf);
	printf("=============\n\n");
	
	// %i - Integer in base 10
	total_printf += printf("1 i: [%i]\n", num);
	total_ft_printf += ft_printf("2 i: [%i]\n", num);
	printf("printf = %d || ft_printf = %d\n", total_printf, total_ft_printf);
	printf("=============\n\n");
	
	// %u - Unsigned decimal number
	total_printf += printf("1 u: [%u]\n", u_num);
	total_ft_printf += ft_printf("2 u: [%u]\n", u_num);
	printf("printf = %d || ft_printf = %d\n", total_printf, total_ft_printf);
	printf("=============\n\n");

	// %x - Hexadecimal (lowercase)
	total_printf += printf("1 x: [%x]\n", num);
	total_ft_printf += ft_printf("2 x: [%x]\n", num);
	printf("printf = %d || ft_printf = %d\n", total_printf, total_ft_printf);
	printf("=============\n\n");

	// %X - Hexadecimal (uppercase)
	total_printf += printf("1 X: [%X]\n", num);
	total_ft_printf += ft_printf("2 X: [%X]\n", num);
	printf("printf = %d || ft_printf = %d\n", total_printf, total_ft_printf);
	printf("=============\n\n");

	// %% - Percent sign
	total_printf += printf("1 pr: [%%]\n");
	total_ft_printf += ft_printf("2 pr: [%%]\n");
	printf("printf = %d || ft_printf = %d\n", total_printf, total_ft_printf);
	printf("=============\n\n");
	
	// Print totals
	printf("Total printf: %d\n", total_printf);
	ft_printf("Total ft_printf: %d\n", total_ft_printf);

	return (0);
}