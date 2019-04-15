/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaveric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 14:08:27 by emaveric          #+#    #+#             */
/*   Updated: 2019/04/13 15:00:18 by emaveric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[j])
			j++;
		else
			j = 0;
		i++;
		if (s2[j] == '\0')
			return ((char *)&s1[i - j]);
	}
	return (0);
}
