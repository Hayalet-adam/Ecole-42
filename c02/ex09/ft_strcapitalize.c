/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcal <mcal@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:01:54 by mcal              #+#    #+#             */
/*   Updated: 2022/02/21 18:01:58 by mcal             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (c == 1)
				str[i] -= 32;
			c = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			c = 0;
		else
			c = 1;
		i++;
	}
	return (str);
}
/*int    main()
{
    char str[] = "salut comment tu vas ? 42mots quarante-deux; cinqu+et+un";
    char str1[] = "test,yaziliri  deneme+dir! son";
    printf("%s", ft_strcapitalize(str));
    printf("\n%s", ft_strcapitalize(str1));
}
*/
