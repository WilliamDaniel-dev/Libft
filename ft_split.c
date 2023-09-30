/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <wdaniel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:01:34 by wdaniel-          #+#    #+#             */
/*   Updated: 2023/04/08 17:28:53 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wrdcont(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			i++;
			while (*s != c && *s)
				s++;
		}
	}
	return (i + 1);
}

static char	*puton(char const *s, char c)
{
	char	*p;
	int		i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	p = (char *)malloc(i + 1);
	p[i--] = 0;
	i = 0;
	while (*s != c && *s)
	{
		p[i++] = *s;
		s++;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	int		k;
	char	**split;

	k = 0;
	split = (char **)malloc(sizeof(char *) * wrdcont(s, c));
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			split[k++] = puton(s, c);
		while (*s != c && *s)
			s++;
	}
	split[k++] = 0;
	return (split);
}
