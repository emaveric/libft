/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaveric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 15:50:06 by emaveric          #+#    #+#             */
/*   Updated: 2019/04/13 16:42:48 by emaveric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = -1;
	j = -1;
	if (start > 0)
		j = start - 2;
	if (s != NULL)
	{
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (str == NULL)
			return (0);
		while (s[++i] != '\0' && start < len)
		{
			str[i] = s[start];
			start++;
		}
		str[++i] = '\0';
		return (str);
	}
	return (0);
}
