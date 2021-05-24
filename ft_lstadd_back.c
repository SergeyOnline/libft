/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sbroderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 11:52:20 by Sbroderi          #+#    #+#             */
/*   Updated: 2020/05/06 11:52:22 by Sbroderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *ptr;

	ptr = *lst;
	if (new)
	{
		if (ptr)
		{
			while (ptr->next)
				ptr = ptr->next;
			ptr->next = new;
		}
		else
			*lst = new;
	}
}
