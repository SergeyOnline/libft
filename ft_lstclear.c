/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sbroderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 13:35:05 by Sbroderi          #+#    #+#             */
/*   Updated: 2020/05/06 13:35:08 by Sbroderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *ptr;
	t_list *next_l;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		ptr = *lst;
		next_l = (ptr->next);
		del(ptr->content);
		free(ptr);
		*lst = next_l;
	}
}
