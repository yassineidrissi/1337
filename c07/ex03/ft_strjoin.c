#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size && strs[i])
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	if (sep)
		len = len + (i - 1) * ft_strlen(sep);
	return (len + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*result;

	i = 0;
	j = 0;
	k = 0;
	if (size <= 0 || !strs || !sep)
		return ((char *)malloc (1));
	result = (char *)malloc (ft_len(size, strs, sep));
	while (i < size)
	{
		while (strs[i][j] != '\0')
			result[k++] = strs[i][j++];
		j = 0;
		while (sep && sep[j] != '\0' && i + 1 < size && strs[i + 1])
			result[k++] = sep[j++];
		j = 0;
		i++;
	}
	result[k] = '\0';
	return (result);
}
/*
int main()
{
    char *strs[3] = {"spike","tom","jerry"};
	char sep[] = "*";
	char *res;
	res = ft_strjoin(3, strs, sep);
	printf("--> |%s| ", res);
}*/