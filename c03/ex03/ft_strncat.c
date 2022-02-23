/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcal <mcal@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:36:18 by mcal              #+#    #+#             */
/*   Updated: 2022/02/23 12:36:22 by mcal             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	destindis;
	unsigned int	srcindis;

	destindis = 0;
	srcindis = 0;
	while (dest[destindis] != '\0')
	{
		destindis++;
	}
	while (srcindis < nb && src[srcindis] != '\0')
	{
		dest[destindis + srcindis] = src[srcindis];
		srcindis++;
	}
	dest[destindis + srcindis] = '\0';
	return (dest);
}
