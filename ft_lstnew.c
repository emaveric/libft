/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaveric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 20:03:25 by emaveric          #+#    #+#             */
/*   Updated: 2019/04/16 18:47:26 by emaveric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	
	new = (t_list *)malloc(sizeof(t_list) * content_size);
	if (new == NULL)
		return (0);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	while (content)
	{
//		new->content = str[i];
		new = new->next;
	}
	return (new);
}
