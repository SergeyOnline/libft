/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sbroderi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 11:42:57 by Sbroderi          #+#    #+#             */
/*   Updated: 2020/04/30 11:51:24 by Sbroderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		num = n * (-1);
		ft_putchar_fd('-', fd);
	}
	else
	{
		num = n;
	}
	while (num / 10 > 0)
	{
		ft_putnbr_fd(num / 10, fd);
		num = num % 10;
	}
	ft_putchar_fd('0' + num, fd);
}
