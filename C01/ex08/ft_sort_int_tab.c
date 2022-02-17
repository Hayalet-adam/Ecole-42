/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcal <mcal@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 03:31:47 by mcal              #+#    #+#             */
/*   Updated: 2022/02/17 05:56:55 by mcal             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	swap;

	a = 0;
	while (a < size - 1)
	{
		while (tab[a] > tab[a + 1])
		{
			swap = tab[a];
			tab[a] = tab[a + 1];
			tab[a + 1] = swap;
			a = 0;
		}
		a++;
	}
}
int main()
{
	int asd[] = {12,11,10,8,18,19,20,1,4,21};
	int a = 0;
	int len = 10;
	ft_sort_int_tab(asd,10);
	while (a < 10)
	{
		printf("Yenisi:%d",asd[a]);
		a++;
	}
}
