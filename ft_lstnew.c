/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sbroderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 10:41:32 by Sbroderi          #+#    #+#             */
/*   Updated: 2020/05/06 10:41:35 by Sbroderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list *list;

	if ((list = (t_list *)malloc(sizeof(list))))
	{
		list->content = content;
		list->next = NULL;
	}
	else
		return (NULL);
	return (list);
}
