/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcal <mcal@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 00:15:08 by mcal              #+#    #+#             */
/*   Updated: 2022/02/26 00:15:20 by mcal             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	withescape(char *str, int *ptr_i)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(char *str)

{
	int	sing;
	int	result;
	int	i;

	result = 0;
	sing = withescape(str, &i);
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sing;
	return (result);
}
