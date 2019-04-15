/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaveric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:37:06 by emaveric          #+#    #+#             */
/*   Updated: 2019/04/15 16:22:50 by emaveric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*
	ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *)dst;
	s2 = (char *)src;
	if (n == 0)
		return (0);
	while ((unsigned char)s2[i] != (unsigned char)c)
	{
		if (i == n)
			return (0);
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	i++;
	return ((char *)&s1[i]);
}
