/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcal <mcal@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:18:04 by mcal              #+#    #+#             */
/*   Updated: 2022/02/17 04:37:44 by mcal             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_strlen(char *str)
{
	int		clear;
	char	karakter;

	clear = 0;
	while (*str + clear != '\0')
	{
		clear++;
	}
	karakter = clear + '0';
	write(1, &karakter, 1);
}
/*
int	main(void)
{
	char	karakter[];
	char	*p;

	karakter[] = "mrbdsrsrs";
	p = karakter;
	ft_strlen(p);
}
*/
