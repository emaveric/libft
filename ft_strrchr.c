/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaveric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 16:36:47 by emaveric          #+#    #+#             */
/*   Updated: 2019/04/10 16:56:31 by emaveric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int n)
{
	int i;
	int j;

	j = -1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)n)
			j = i;
		i++;
	}
	if (!n)
		return ((char *)&str[i]);
	if (j != -1)
		return ((char *)&str[j]);
	return (0);
}
