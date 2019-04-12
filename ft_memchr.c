/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaveric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 22:06:05 by emaveric          #+#    #+#             */
/*   Updated: 2019/04/11 22:08:46 by emaveric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*new;

	i = 0;
	new = (char *)s;
	while (i < n)
	{
		if (new[i] == c)
			return ((char *)&new[i]);
		i++;
	}
	return (0);
}
