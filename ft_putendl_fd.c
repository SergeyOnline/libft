/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sbroderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 23:28:57 by Sbroderi          #+#    #+#             */
/*   Updated: 2020/04/29 23:29:01 by Sbroderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	index;

	index = 0;
	if (s != NULL)
	{
		while (s[index] != '\0')
		{
			ft_putchar_fd(s[index], fd);
			index++;
		}
		ft_putchar_fd('\n', fd);
	}
}
