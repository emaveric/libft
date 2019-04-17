/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaveric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 14:52:22 by emaveric          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/04/15 20:40:09 by emaveric         ###   ########.fr       */
=======
/*   Updated: 2019/04/13 14:59:27 by emaveric         ###   ########.fr       */
>>>>>>> 8f081af0f523abf2e0c53aa234bdf89c1841cd36
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
<<<<<<< HEAD
=======
	j = 0;
>>>>>>> 8f081af0f523abf2e0c53aa234bdf89c1841cd36
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && i < len)
	{
<<<<<<< HEAD
		j = 0;
		while (s1[i + j] == s2[j] && i + j < len)
		{
			j++;
			if (s2[j] == '\0')
				return ((char *)&s1[i]);
		}
		i++;
=======
		if (s1[i] == s2[j])
			j++;
		else
			j = 0;
		i++;
		if (s2[j] == '\0')
			return ((char *)&s1[i - j]);
>>>>>>> 8f081af0f523abf2e0c53aa234bdf89c1841cd36
	}
	return (0);
}
