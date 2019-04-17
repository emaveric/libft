/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaveric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 17:51:11 by emaveric          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/04/16 19:37:57 by emaveric         ###   ########.fr       */
=======
/*   Updated: 2019/04/13 18:04:28 by emaveric         ###   ########.fr       */
>>>>>>> 8f081af0f523abf2e0c53aa234bdf89c1841cd36
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
<<<<<<< HEAD
	if (size == 0)
		return (ft_strlen(src));
	while (dst[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && i + j < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (j > 0)
	{
		dst[i + j] = '\0';
		return (ft_strlen(src) + i);
	}
	return (ft_strlen(src) + i + j);
=======
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && i < size)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (i);
>>>>>>> 8f081af0f523abf2e0c53aa234bdf89c1841cd36
}
