/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sbroderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:06:09 by Sbroderi          #+#    #+#             */
/*   Updated: 2020/05/01 13:06:12 by Sbroderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t i_h;
	size_t i_n;

	i_h = 0;
	i_n = 0;
	if (!(*needle))
		return ((char *)haystack);
	while (haystack[i_h] != '\0' && i_h < len)
	{
		i = i_h;
		while (haystack[i] == needle[i_n] && i < len)
		{
			if (needle[i_n + 1] == '\0')
				return ((char *)&haystack[i_h]);
			i++;
			i_n++;
		}
		i_n = 0;
		i_h++;
	}
	return (NULL);
}
