/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:55:04 by arocha-l          #+#    #+#             */
/*   Updated: 2021/11/17 15:35:08 by arocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*sub;

	while (lst && *lst)
	{
		sub = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = sub;
	}
	*lst = NULL;
}
