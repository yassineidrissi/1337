/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 09:02:59 by lahammam          #+#    #+#             */
/*   Updated: 2021/09/28 09:20:51 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*
int main()
{
	char s1[] = "dham";
	char s2[] = "aham";
	int a = strcmp(s1,s2);
	int b = ft_strcmp(s1, s2);
	printf("a = %d \n ",a);
	printf("b = %d \n",b);
	return 0;
}*/
