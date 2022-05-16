#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/* 
int main()
{
	unsigned  int n = 4;
//	char src[] = "ahammam";
//	char dest[n];
//	char *p1;
//	p1 = strncpy(dest,src,n);
//	printf("src = %s et dest = %s pon %p   %p \n",src,dest,p1,dest);
	char src1[] = "aham";
	char dest1[5];
	ft_strncpy(dest1,src1,5);
	 printf("src1 = %s et dest1 = %s  \n",src1,dest1);

}
*/
