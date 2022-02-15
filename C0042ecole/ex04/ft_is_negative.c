/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcal <mcal@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:02:03 by mcal              #+#    #+#             */
/*   Updated: 2022/02/14 06:02:46 by mcal             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative( int n)
{
	char	negatif;
	char	pozitif;

	negatif = 'N';
	pozitif = 'P';
	if (n < 0)
	{
		write(1, &negatif, 1);
	}
	else
	{
		write(1, &pozitif, 1);
	}
}
