/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sbroderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 10:37:05 by Sbroderi          #+#    #+#             */
/*   Updated: 2020/05/02 10:37:08 by Sbroderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i_src;
	size_t i_dst;
	size_t result;

	i_src = 0;
	i_dst = 0;
	result = 0;
	if (!(dst))
		return (0);
	while (src[i_src++])
		result++;
	i_src = 0;
	if (dstsize == 0)
		return (result);
	while (src[i_src] != '\0')
	{
		if (i_dst < dstsize - 1)
		{
			dst[i_dst] = src[i_src];
			i_dst++;
		}
		i_src++;
	}
	dst[i_dst] = '\0';
	return (result);
}
