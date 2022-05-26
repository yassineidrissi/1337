#include <stdlib.h>
//#include <stdio.h>



int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*result;

	result = 0;
	len = 0;
	if (max > min)
	{
		i = 0;
		len = max - min;
		result = malloc(len * sizeof(int));
		while (i < len)
		{
			result[i] = min + i;
			i++;
		}	
	}
	*range = result;
	return (len);
}
/*
int main()
{
    int i = 0;
    int min = 1;
    int max = -9;
    int l = max - min;
    int *res;

    int a = ft_ultimate_range(&res,min,max);
    while (i < l)
    {
        printf("%d, ",res[i]);
        i++;
    }
}*/