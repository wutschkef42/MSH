/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wutschkef <fwutschk@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 15:04:48 by wutschkef         #+#    #+#             */
/*   Updated: 2017/06/27 00:20:37 by fwutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *ct, size_t ct_size)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!ct)
	{
		new->ct = NULL;
		new->ct_size = 0;
	}
	else
	{
		if (!(new->ct = (void *)malloc(ct_size)))
			return (NULL);
		ft_memcpy(new->ct, ct, ct_size);
		new->ct_size = ct_size;
	}
	new->next = NULL;
	return (new);
}
