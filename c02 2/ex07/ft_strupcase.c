#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0 ;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char str[] = "ahaTT58mam";
	ft_strupcase(str);
	printf(" str = %s \n " ,str);
}*/
