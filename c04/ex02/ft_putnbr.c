/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 15:01:22 by yaidriss          #+#    #+#             */
/*   Updated: 2022/05/21 15:01:25 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	a;

	if (nb == INT_MIN)
		write(1, "-2147483648", 11);
	else if (nb < 10 && nb >= 0)
	{
		a = nb + 48;
		write(1, &a, 1);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-1 * nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10 );
	}
}
/*
int main()
{
	ft_putnbr(-2147483647);
}*/
