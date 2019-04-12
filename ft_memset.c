/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaveric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 22:28:59 by emaveric          #+#    #+#             */
/*   Updated: 2019/04/11 21:30:43 by emaveric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*new;

	i = 0;
	new = (char *)b;
	if (len == 0)
		return (new);
	while (i < len)
	{
		new[i] = (char)c;
		i++;
	}
	return (new);
}
