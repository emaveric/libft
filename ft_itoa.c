/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaveric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 22:52:45 by emaveric          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/04/17 18:58:57 by emaveric         ###   ########.fr       */
=======
/*   Updated: 2019/04/14 22:42:40 by emaveric         ###   ########.fr       */
>>>>>>> 8f081af0f523abf2e0c53aa234bdf89c1841cd36
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
static	int		ft_num_len(int n)
{
	int len;

	len = 0;
	if (n == 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char		ft_int_to_ch(char *str, int n, int len)
{
	while (--len >= 0)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (*str);
}

char			*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		sign;

=======
char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*str;
	int		sign;

	//if (n < -2147483648 && n > 2147483647)
	//	return (0);
>>>>>>> 8f081af0f523abf2e0c53aa234bdf89c1841cd36
	sign = 0;
	len = 0;
	if (n < 0)
	{
		sign = 1;
		len++;
		n *= -1;
	}
<<<<<<< HEAD
	len += ft_num_len(n);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	str[len] = '\0';
	ft_int_to_ch(str, n, len);
	if (n * sign == -2147483648)
	{
		ft_int_to_ch(str, n - 8, len);
		str[len - 1] = '8';
=======
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
>>>>>>> 8f081af0f523abf2e0c53aa234bdf89c1841cd36
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}
