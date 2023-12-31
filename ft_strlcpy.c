/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <wdaniel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 23:12:24 by wdaniel-          #+#    #+#             */
/*   Updated: 2023/03/05 23:13:50 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	size_t			s;

	s = (ft_strlen(src));
	if (size == 0)
		return (s);
	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (s);
}

int main (void)
{
	char dst[] = "aceito";
	char src[] = "eu";
	
	char result;

	result = ft_strcpy(dst, src, 7);

	printf("%s\n", result);
	return (0);
}