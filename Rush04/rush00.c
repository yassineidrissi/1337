/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikorchi <ikorchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 23:58:11 by ikorchi          #+#    #+#             */
/*   Updated: 2022/05/17 00:06:06 by ikorchi         ###   ########.fr       */
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
		ft_putchar('o');
		ft_putchar('\n');
	}
	else
	{	
		ft_putchar('o');
		while (i++ < x -2)
			ft_putchar('-');
		ft_putchar('o');
		ft_putchar('\n');
	}
}

void	ft_print_line(int x)
{
	int	i;

	i = 0;
	ft_putchar('|');
	if (x > 1)
	{	
		while (i++ < x -2)
			ft_putchar(' ');
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	ft_print_last(int x)
{
	int	i;

	i = 0;
	if (x == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	else
	{	
		ft_putchar('o');
		while (i++ < x -2)
			ft_putchar('-');
		ft_putchar('o');
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
