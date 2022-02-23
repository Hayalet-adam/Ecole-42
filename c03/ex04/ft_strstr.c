/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcal <mcal@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:36:50 by mcal              #+#    #+#             */
/*   Updated: 2022/02/23 12:37:01 by mcal             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *search)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (search[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == search[j] && str[i + j] != '\0')
			j++;
		if (search[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
