/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <wdaniel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 04:56:06 by wdaniel-          #+#    #+#             */
/*   Updated: 2023/03/28 20:09:31 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return(1);
	else
		return (0);
}

/*ft_atoi the mimics a atoi the original converts the initial portion 
of the string pointed to by nptr to int*/
int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while (str[i] == 32)
	i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	result = 0;
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * sign);
}

int		main()
{
	char	*str;
	int		retur;

	str = "4";

	retur = ft_atoi(str);

	printf("Four two: %d\n", retur);
	printf("Original: %d\n", atoi(str));

	return (0);
}