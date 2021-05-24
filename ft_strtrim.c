/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sbroderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 22:24:28 by Sbroderi          #+#    #+#             */
/*   Updated: 2020/05/03 22:24:32 by Sbroderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		start;
	unsigned int		end;
	char				*str;
	unsigned int		size;

	if (!s1)
		return (NULL);
	if (!(*s1))
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen((char *)s1) - 1;
	while (s1[start + 1] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end >= start && ft_strchr(set, s1[end]) != NULL)
		end--;
	size = end - start + 1;
	if (!(str = (char *)malloc(sizeof(*str) * size + 1)))
		return (NULL);
	str = ft_substr(s1, start, size);
	return (str);
}
