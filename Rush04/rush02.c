/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikorchi <ikorchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 00:02:18 by ikorchi          #+#    #+#             */
/*   Updated: 2022/05/17 00:14:08 by ikorchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_first(int x)
{
	int	i;

	i = 0;
	if (x == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	else
	{	
		ft_putchar('A');
		while (i++ < x -2)
			ft_putchar('B');
		ft_putchar('A');
		ft_putchar('\n');
	}
}

void	ft_print_line(int x)
{
	int	i;

	i = 0;
	ft_putchar('B');
	if (x > 1)
	{	
		while (i++ < x -2)
			ft_putchar(' ');
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	ft_print_last(int x)
{
	int	i;

	i = 0;
	if (x == 1)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
	else
	{	
		ft_putchar('C');
		while (i++ < x -2)
			ft_putchar('B');
		ft_putchar('C');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	i;

	if (y >= 1 && x >= 1)
	{
		i = 1;
		ft_print_first(x);
		while (i++ <= y - 2)
			ft_print_line(x);
		if (y != 1)
			ft_print_last(x);
	}
}
