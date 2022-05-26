
#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0 ;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len_src;
	char	*result;

	i = 0;
	len_src = ft_strlen(src);
	result = (char *) malloc(len_src * sizeof(char) + 1);
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
int main()
{
    char src[] = "ahamttggffjfhgggghggghfgghfhmam";
    char *s1;
    s1 = strdup(src);
    char *s2;
    s2 = ft_strdup(src);
    printf("s1 = |%s| \n",s1);
    printf("s2 = |%s| \n",s2);
}*/