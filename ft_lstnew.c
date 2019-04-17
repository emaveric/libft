/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaveric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 20:03:25 by emaveric          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/04/16 18:47:26 by emaveric         ###   ########.fr       */
=======
/*   Updated: 2019/04/13 20:42:49 by emaveric         ###   ########.fr       */
>>>>>>> 8f081af0f523abf2e0c53aa234bdf89c1841cd36
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
<<<<<<< HEAD
	
	new = (t_list *)malloc(sizeof(t_list) * content_size);
	if (new == NULL)
		return (0);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
=======
	size_t	i;
	char	*str;
	
	str = (char *)content;
	i = 0;
	new = malloc(sizeof(t_list) * content_size);
	if (new == NULL)
		return (0);
>>>>>>> 8f081af0f523abf2e0c53aa234bdf89c1841cd36
	while (content)
	{
//		new->content = str[i];
		new = new->next;
<<<<<<< HEAD
	}
=======
		i++;
	}
	new->next = NULL;
>>>>>>> 8f081af0f523abf2e0c53aa234bdf89c1841cd36
	return (new);
}
