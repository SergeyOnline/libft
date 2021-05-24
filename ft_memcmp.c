/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sbroderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:50:59 by Sbroderi          #+#    #+#             */
/*   Updated: 2020/05/02 11:51:01 by Sbroderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ptr_s1;
	unsigned char *ptr_s2;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*ptr_s1 != *ptr_s2)
		{
			return (*ptr_s1 - *ptr_s2);
		}
		ptr_s1++;
		ptr_s2++;
		n--;
	}
	return (0);
}
