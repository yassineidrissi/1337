/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:03:11 by lahammam          #+#    #+#             */
/*   Updated: 2021/10/01 20:04:05 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0 ;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		len_dest;

	len_dest = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
/*
int main()
{
	unsigned int n = 5;
	char src[] = "3r l33r";
	char dest[20] = "pouic";
	char *a=strcat(dest,src);
	printf("src=%s et dest=%s p=%p \n",src,dest,a);
	char dest1[20] = "pouic";
	char *a1=ft_strcat(dest1,src);
	printf("src=%s et dest=%s p=%p \n",src,dest1,a1);
	return 0;
}*/
