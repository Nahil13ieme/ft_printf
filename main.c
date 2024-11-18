/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhami <nbenhami@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:03:57 by nbenhami          #+#    #+#             */
/*   Updated: 2024/11/17 22:49:10 by nbenhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("Hello %s! You scored %c points.\n", "Alice", "44");

	printf("Hello %s! You scored %c points.\n", "Alice", "44");
	return (0);
}