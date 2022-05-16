/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 08:24:26 by lahammam          #+#    #+#             */
/*   Updated: 2021/09/27 17:26:49 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0 ;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (ft_strlen(src));
}
/*
int main()
{
	char src[] = "ahammam";
	char dest[5];
	int a;
	a = strlcpy(dest, src,5);
	printf("src=%s dee=%s, a=%d\n",src,dest,a);
	char dest1[5];
	int a1;
	a1 = ft_strlcpy(dest1, src,7);
	printf("src=%s dee=%s, a=%d\n",src,dest1,a1);
}
*/
