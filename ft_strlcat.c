/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sbroderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:09:02 by Sbroderi          #+#    #+#             */
/*   Updated: 2020/05/01 15:09:05 by Sbroderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i_dst;
	size_t i_src;
	size_t result;

	i_dst = 0;
	result = 0;
	while (dst[i_dst] != '\0')
	{
		i_dst++;
		result++;
	}
	if (result > dstsize)
		result = dstsize;
	if (dstsize == 0)
		result = 0;
	i_src = 0;
	while (src[i_src] != '\0')
	{
		if (i_dst < dstsize - 1 && dstsize != 0)
			dst[i_dst++] = src[i_src];
		result++;
		i_src++;
	}
	dst[i_dst] = '\0';
	return (result);
}
