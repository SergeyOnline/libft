/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sbroderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:32:29 by Sbroderi          #+#    #+#             */
/*   Updated: 2020/05/03 12:32:31 by Sbroderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (ptr_src[i] == (unsigned char)c)
		{
			ptr_dst[i] = ptr_src[i];
			return (&ptr_dst[i + 1]);
		}
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (NULL);
}
