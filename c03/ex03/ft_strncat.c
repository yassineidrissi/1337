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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len_dest;

	len_dest = ft_strlen(dest);
	i = 0;
	while (src && src[i] != '\0' && i < nb)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	if (dest && dest[len_dest + i] != '\0')
		dest[len_dest + i] = '\0';
	return (dest);
}
/*
int main()
{
	unsigned int n = 1;
	char src[] = "ahamm";
	//char dest[4] = "lha";
	//char *a=strncat(dest,src,n);
	//printf("src=%s et dest=%s p=%p \n",src,dest,a);
	char dest1[4] = "lha";
	char *a1=ft_strncat(dest1,src,n);
	printf("src=%s et dest=%s p=%p \n",src,dest1,a1);
	return 0;
}*/
