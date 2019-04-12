/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaveric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:37:06 by emaveric          #+#    #+#             */
/*   Updated: 2019/04/12 20:35:28 by emaveric         ###   ########.fr       */
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
	while (i < n && s2[i - 1] != (unsigned char)c)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	i++;
	while (s1[i + 1] != '\0')
	{
		s1[i] = '\0';
		i++;
	}
	return ((char *)s1);
}
