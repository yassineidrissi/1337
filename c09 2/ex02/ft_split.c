
#include <stdlib.h>
// #include <stdio.h>

int	ft_is_exist(char c, char *charest)
{
	int	i;

	i = 0;
	while (charest && charest[i] != '\0')
	{
		if (charest[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_m_alloc(char *str, char *charset)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str && str[i] != '\0')
	{
		if (!ft_is_exist(str[i], charset))
		{
			while (!ft_is_exist(str[i], charset) && str[i] != '\0')
				i++;
			len++;
		}
		while (ft_is_exist(str[i], charset) && str[i] != '\0')
			i++;
	}
	return (len + 1);
}

char	*ft_add_mot(char *str, int i, int j)
{
	int		len_mot;
	int		k;
	char	*mot;

	mot = 0;
	len_mot = (j - i + 1) + 1;
	mot = (char *)malloc (len_mot * sizeof(char));
	k = 0;
	while (k < len_mot - 1)
	{
		mot[k] = str[i + k];
		k++;
	}
	mot[k] = '\0';
	return (mot);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	result = 0;
	if (!str)
		return (result);
	result = (char **)malloc (ft_m_alloc (str, charset) * sizeof(char *));
	while (str && str[i] != '\0')
	{
		j = i;
		while (!ft_is_exist(str[i], charset) && str[i] != '\0')
			i++;
		if (i != j)
			result[k++] = ft_add_mot(str, j, i - 1);
		while (ft_is_exist(str[i], charset) && str[i] != '\0')
			i++;
	}
	result[k] = 0;
	return (result);
}

/*
int main()
{
    char strs[]= "fkbm*lfgkmlk*fmbklfgmblk*fg
	mblgmbgl*gsdg*hdhbdj*dsfgsd*dsdsa****";
    char **result;
	result = 0;
    result = ft_split(strs,0);

    int i = 0 ;
    // while (result && result[i] != 0)
    // {
    //      printf("%d-->|%s|\n", i, result[i]);
    //      i++;
    // }
}*/