/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 06:26:53 by lahammam          #+#    #+#             */
/*   Updated: 2021/09/28 13:21:35 by lahammam         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (ft_strlen(to_find) == 0)
		return (str);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}
/*
int main()
{
	unsigned int n = 2;
	char str[] = "ahan";
	char find[] = "aham";
	char *a=strstr(str,find);
	printf("str=%s et find=%s p=%p %p\n",str,find,a,&str[0]);
	//char src1[] = "ahamm ";
	//char dest1[20] = "lhoussine";
	char *a2=ft_strstr(str,find);
	printf("stc=%s et find=%s p=%p \n",str,find,a2);
	return 0;
}*/
