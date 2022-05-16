
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
	int a;
	char str[] = "123545890";
	a = ft_str_is_numeric(str);

	printf(" a = %d \n " ,a);
}*/
