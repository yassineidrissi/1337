/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:32:30 by lahammam          #+#    #+#             */
/*   Updated: 2021/10/10 18:27:12 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	char *hex;
	int a;

	i = 0;
	a = 0;
	hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
		{
			ft_putstr('\\');
			a = str[i];
			printf("--> %d",a);
			if (a < 16)
			{
				ft_putstr('0');
				ft_putstr(hex[a]);
			}
			else
			{
				ft_putstr(hex[a/16]);
				ft_putstr(hex[a%16]);
			}
			
		}
		else
			ft_putstr(str[i]);
		i++;
	}
}    

int main()
{
	char str[] = "Coucoutu |ÿ| vas bien ?";
	ft_putstr_non_printable(str);
}