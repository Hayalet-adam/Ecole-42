 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcal <mcal@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:05:42 by mcal              #+#    #+#             */
/*   Updated: 2022/03/02 07:25:13 by mcal             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] < s2[index])
			return (-1);
		if (s1[index] > s2[index])
			return (1);
		index++;
	}
	return (0);
}

void	sort(int ac, char **av)
{
	int		i;
	int		j;
	char	*bos;

	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				bos = av[i];
				av[i] = av[j];
				av[j] = bos;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	index1;
	int	index2;

	sort(ac, av);
	index1 = 1;
	while (index1 < ac)
	{
		index2 = 0;
		while (av[index1][index2])
		{
			ft_write(av[index1][index2]);
			index2++;
		}
		ft_write('\n');
		index1++;
	}
}
