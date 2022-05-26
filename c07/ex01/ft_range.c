#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*result;

	result = 0;
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
		return (result);
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
    int i = 0;
    int min = 10;
    int max = 9;
    int l = max - min;
    int *res;
    res = ft_range(min,max);
    while (i < l)
    {
        printf("%d, ",res[i]);
        i++;
    }
}*/