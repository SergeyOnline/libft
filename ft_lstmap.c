/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sbroderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 16:01:04 by Sbroderi          #+#    #+#             */
/*   Updated: 2020/05/06 16:01:06 by Sbroderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
				void (*del)(void *))
{
	t_list	*result;
	t_list	*ptr_lst;
	t_list	*ptr_result;

	if (!lst)
		return (NULL);
	result = NULL;
	ptr_lst = lst;
	while (ptr_lst)
	{
		if (f(ptr_lst->content))
		{
			if ((ptr_result = ft_lstnew(f(ptr_lst->content))) == NULL)
			{
				ft_lstclear(&result, del);
				return (NULL);
			}
			ft_lstadd_back(&result, ptr_result);
		}
		ptr_lst = ptr_lst->next;
	}
	return (result);
}
