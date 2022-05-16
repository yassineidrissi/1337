/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 07:46:04 by lahammam          #+#    #+#             */
/*   Updated: 2021/10/05 10:42:01 by lahammam         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;

	i = 0;
	len_dest = ft_strlen(dest);
	if (len_dest >= size)
		return (ft_strlen(src) + size);
	while (src[i] != '\0' && (len_dest + i < size - 1))
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (ft_strlen(src) + len_dest);
}

int main()
{
	unsigned int n = 12;
	char src[] = "pouic ";
	char dest[12] = "pouic54";
	int a=strlcat(dest,src,n);
	printf("src=%s et dest=%sa=%d \n",src,dest,a);
	//char dest1[100] = "pouic";
	//int a1=ft_strlcat(dest1,src,n);
	//printf("src=%s et dest=%sa=%d \n",src,dest1,a1);
	return 0;
}
