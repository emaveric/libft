/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaveric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 22:52:45 by emaveric          #+#    #+#             */
/*   Updated: 2019/04/14 22:42:40 by emaveric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*str;
	int		sign;

	//if (n < -2147483648 && n > 2147483647)
	//	return (0);
	sign = 0;
	len = 0;
	if (n < 0)
	{
		sign = 1;
		len++;
		n *= -1;
	}
	i = n;
	if (n == 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (0);
	str[len] = '\0';
	while (--len >= 0)
	{
		str[len] = (i % 10) + '0';
		i /= 10;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}
