/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcal <mcal@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 01:07:38 by mcal              #+#    #+#             */
/*   Updated: 2022/03/02 05:30:32 by mcal             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	counter;

	counter = 0;
	if (argc > 0)
	{
		while (argv[0][counter] != '\0')
			ft_putchar(argv[0][counter++]);
		ft_putchar('\n');
	}
}
