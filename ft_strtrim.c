/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaveric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 22:30:36 by emaveric          #+#    #+#             */
/*   Updated: 2019/04/13 15:49:14 by emaveric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s != NULL)
	{
		str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (str == NULL)
			return (0);
		while (s[i] == 32 || s[i] == 44 || s[i] == '\n' || s[i] == '\t')
			i++;
		while (s[i] != '\0' && (s[i] != 32 || s[i] != 44 ||
					s[i] != '\n' || s[i] != '\t'))
		{
			str[i] = s[i];
			i++;
		}
		str[i] = '\0';
	}
	else
		return (0);
	return (str);
}
