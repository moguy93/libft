/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:26:15 by moguy             #+#    #+#             */
/*   Updated: 2019/01/18 20:08:52 by moguy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int	nb;

	nb = (long int)n;
	if (n > 2147483647 || n < -2147483648)
		return ;
	if (n < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
