/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcal <mcal@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 02:42:43 by mcal              #+#    #+#             */
/*   Updated: 2022/02/17 03:33:24 by mcal             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	gecici;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		gecici = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = gecici;
		i++;
	}
}
/*
int	main(void)
{
	int	tab[5];
	int	size;
	int	i;

	tab[5] = {1, 2, 3, 4, 5};
	size = 5;
	i = 0;
	
	ft_rev_int_tab(tab, size);
	while(i <= size-1)
	{
		printf("Değişen;%d \n",tab[i]);
		i++;
	}
}
*/
