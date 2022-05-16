//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
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
	unsigned int n = 3;
	char s1[] = "ahtmyggrfdgdfgg";
	char s2[] = "ah5mtydgdfgdfgdfy";
	int a = strncmp(s1,s2,n);
	int b = ft_strncmp(s1, s2,n);
	printf("a = %d \n ",a);
	printf("b = %d \n",b);
	return 0;
}*/
