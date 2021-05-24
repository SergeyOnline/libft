/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sbroderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 13:32:43 by Sbroderi          #+#    #+#             */
/*   Updated: 2020/05/02 13:32:46 by Sbroderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *ptr;

	ptr = (char *)s;
	while (n > 0)
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		ptr++;
		n--;
	}
	return (NULL);
}
