/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcal <mcal@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:25:24 by mcal              #+#    #+#             */
/*   Updated: 2022/02/15 02:25:34 by mcal             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	birler;
	int	onlar;
	int	yuzler;

	birler = '0';
	while (birler <= '7')
	{
		onlar = birler + 1;
		while (onlar <= '8')
		{
			yuzler = onlar + 1;
			while (yuzler <= '9')
			{
				write(1, &birler, 1);
				write(1, &onlar, 1);
				write(1, &yuzler, 1);
				if (birler != '7' || onlar != '8' || yuzler != '9')
					write(1, ", ", 2);
				yuzler++;
			}
			onlar++;
		}
		birler++;
	}
}
