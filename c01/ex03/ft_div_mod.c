/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcal <mcal@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:30:54 by mcal              #+#    #+#             */
/*   Updated: 2022/02/17 04:33:33 by mcal             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 5;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d, left %d\n", a, b, div, mod);
}
*/
