/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcal <mcal@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 20:26:19 by mcal              #+#    #+#             */
/*   Updated: 2022/02/28 20:26:27 by mcal             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_prime(int nb)
{
	int	b;

	b = 2;
	while (b < nb)
	{
		if (nb % b == 0)
			return (0);
		b++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (nb < 2147483647 && !ft_find_prime(nb))
		nb++;
	return (nb);
}
