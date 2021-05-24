/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sbroderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 11:34:29 by Sbroderi          #+#    #+#             */
/*   Updated: 2020/05/06 11:34:32 by Sbroderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*ptr;

	count = 0;
	if (!(lst))
		return (0);
	ptr = lst;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
