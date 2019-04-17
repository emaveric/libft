/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaveric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 17:16:59 by emaveric          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/04/17 21:12:30 by emaveric         ###   ########.fr       */
=======
/*   Updated: 2019/04/13 17:41:06 by emaveric         ###   ########.fr       */
>>>>>>> 8f081af0f523abf2e0c53aa234bdf89c1841cd36
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

<<<<<<< HEAD
static int	ft_words(const char *s, char c)
{
	int	count;
	int	k;

	k = 0;
	count = 0;
	while (s[k] != '\0')
	{
		while (s[k] == c)
			k++;
		if (s[k] != '\0' && s[k] != c)
			count++;
		while (s[k] != c && s[k] != '\0')
			k++;
	}
	return (count);
}

static int	ft_splitlen(const char *s, char c, int k)
{
	int	len;

	len = 0;
	while (s[k] != '\0' && s[k] != c)
	{
		len++;
		k++;
	}
	return (len);
}

static void	ft_splitfree(char **str, int i)
{
	while (i > 0)
	{
		i--;
		ft_strdel(str);
	}
	ft_strdel(str);
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	i;
=======
char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
>>>>>>> 8f081af0f523abf2e0c53aa234bdf89c1841cd36
	size_t	k;
	char	**str;

	i = 0;
<<<<<<< HEAD
	k = 0;
	if (!s)
		return (0);
	if (!(str = (char **)malloc(sizeof(char) * (ft_words(s, c) + 1))))
		return (0);
	while (s[k] != '\0')
	{
		while (s[k] == c)
			k++;
		if (s[k] != c && s[k] != '\0')
		{
			if (!(str[i++] = ft_strsub(s, k, ft_splitlen(s, c, k))))
			{
				ft_splitfree(str, i);
				return (0);
			}
		}
		k += ft_splitlen(s, c, k);
	}
	str[i] = NULL;
	return (str);
=======
	j = -1;
	k = -1;
	if (s != NULL)
	{
		str = (char **)malloc(sizeof(char) * (ft_strlen(s) + 1));
		while (s[++k] != '\0')
		{
		//	while (s[k] == c)
		//		k++;
			while (s[k] != c && s[k] != '\0')
			{
				str[i][++j] = s[k];
				k++;
			}
			str[i][++j] = '\0';
			j = -1;
			i++;
		}
		return ((char **)str);
	}
	return (0);
>>>>>>> 8f081af0f523abf2e0c53aa234bdf89c1841cd36
}
