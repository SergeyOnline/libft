/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sbroderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 14:05:37 by Sbroderi          #+#    #+#             */
/*   Updated: 2020/05/02 14:05:40 by Sbroderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	i = 0;
	if (dst || src)
	{
		if (ptr_dst <= ptr_src)
			while (i < len)
			{
				ptr_dst[i] = ptr_src[i];
				i++;
			}
		else
			while (len > 0)
			{
				ptr_dst[len - 1] = ptr_src[len - 1];
				len--;
			}
	}
	return (dst);
}
