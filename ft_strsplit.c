/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaveric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 17:16:59 by emaveric          #+#    #+#             */
/*   Updated: 2019/04/13 17:41:06 by emaveric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**str;

	i = 0;
	j = -1;
	k = -1;
	if (s != NULL)
	{
		str = (char **)malloc(sizeof(char) * (ft_strlen(s) + 1));
		while (s[++k] != '\0')
		{
		//	while (s[k] == c)
		//		k++;
			while (s[k] != c && s[k] != '\0')
			{
				str[i][++j] = s[k];
				k++;
			}
			str[i][++j] = '\0';
			j = -1;
			i++;
		}
		return ((char **)str);
	}
	return (0);
}
