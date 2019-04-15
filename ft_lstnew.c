/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaveric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 20:03:25 by emaveric          #+#    #+#             */
/*   Updated: 2019/04/13 20:42:49 by emaveric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	size_t	i;
	char	*str;
	
	str = (char *)content;
	i = 0;
	new = malloc(sizeof(t_list) * content_size);
	if (new == NULL)
		return (0);
	while (content)
	{
//		new->content = str[i];
		new = new->next;
		i++;
	}
	new->next = NULL;
	return (new);
}
