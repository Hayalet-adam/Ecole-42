/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcal <mcal@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 21:36:25 by mcal              #+#    #+#             */
/*   Updated: 2022/03/02 05:32:22 by mcal             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	n = 1;
	if (argc >= 1)
	{
		while (n < argc)
		{
			i = 0;
			while (argv[n][i])
			{
				write(1, &argv[n][i], 1);
				i++;
			}
			write(1, "\n", 1);
			n++;
		}
		return (0);
	}
}
