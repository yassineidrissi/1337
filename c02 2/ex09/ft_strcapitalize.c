/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 06:39:19 by lahammam          #+#    #+#             */
/*   Updated: 2021/09/27 14:25:59 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0 ;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		new;

	i = 0 ;
	new = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] < 48 || (str[i] > 57 && str[i] < 65))
			new = 1;
		if ((str[i] > 90 && str[i] < 97) || str[i] > 122)
			new = 1;
		if (str[i] >= 48 && str[i] <= 57)
			new = 0;
		if ((str[i] >= 97 && str[i] <= 122) && new == 1 )
		{
			str[i] = str[i] - 32;
			new = 0 ;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char str[] ="2salut, comment tu vas ? 42mots quarante-deux; cinquante+et+uU:w";
	ft_strcapitalize(str);
	printf(" str = %s \n " ,str);
}*/
