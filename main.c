/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhami <nbenhami@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:03:57 by nbenhami          #+#    #+#             */
/*   Updated: 2024/11/18 04:23:17 by nbenhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int a,b = 0;
	a = ft_printf("char : %c, str : %s, pointer : %p, number : %d, hex : %x\n\n",
			'a',
			"Yo 42 !",
			&a,
			-100,
			-5
	);


	b = printf("char : %c, str : %s, pointer : %p, number : %d, hex : %x\n\n",
			'a',
			"Yo 42 !",
			&a,
			-100,
			-5
	);


	printf("ft_printf : printf= %d:%d\n", a, b);
	return (0);
}