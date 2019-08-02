/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:05:46 by moguy             #+#    #+#             */
/*   Updated: 2018/11/14 12:44:40 by moguy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	nb = (long int)n;
	if (n > 2147483647 || n < -2147483648)
		return ;
	if (fd)
	{
		if (n < 0)
		{
			nb = -nb;
			ft_putchar_fd('-', fd);
		}
		if (nb < 10)
			ft_putchar_fd((nb + '0'), fd);
		else if (nb > 9)
		{
			ft_putnbr_fd(nb / 10, fd);
			ft_putnbr_fd(nb % 10, fd);
		}
	}
}
