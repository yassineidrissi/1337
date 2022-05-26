//#include <unistd.h>
//#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int	ft_isspace(char c);

int	ft_strlen(char *str)
{
	int		i;

	i = 0 ;
	while (str && *(str + i) != '\0')
		i++;
	return (i);
}

int	ft_check(char *base)
{
	int	i;
	int	j;
	int	len_base;

	i = 0;
	j = 0;
	len_base = ft_strlen(base);
	if (len_base <= 1)
		return (0);
	while (i < len_base)
	{
		if (base[i] == '+' || base[i] == '-' || ft_isspace(base[i]))
			return (0);
		j = i + 1;
		while (j < len_base)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	*ft_add_char(char *src, char c)
{
	int		lent_src;
	char	*result;
	int		i;

	result = 0;
	lent_src = ft_strlen(src);
	result = (char *) malloc(lent_src + 2);
	i = 0;
	while (i < lent_src)
	{
		result[i] = src[i];
		i++;
	}
	free(src);
	result[i] = c;
	result[i + 1] = '\0';
	return (result);
}

char	*ft_int_base(int nbr, char *base, char *res)
{
	int	len_base;

	len_base = ft_strlen(base);
	if (nbr < 0)
	{
		nbr = -1 * nbr;
		res = ft_add_char(res, '-');
	}
	if (nbr > 0)
	{
		res = ft_int_base(nbr / len_base, base, res);
		res = ft_add_char(res, base[nbr % len_base]);
	}
	return (res);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	char	*result;

	result = 0;
	if (nbr == 0)
		result = ft_add_char(result, base[0]);
	else if (nbr == -2147483648)
	{
		result = ft_int_base(-1 * (nbr / ft_strlen(base)), base, result);
		result = ft_int_base(base[-1 * (nbr % ft_strlen(base))], base, result);
	}
	else
		result = ft_int_base(nbr, base, result);
	return (result);
}

// int main()
// {	
// 	char *src;
// 	src = ft_putnbr_base(1234,"0123456789");
// //	printf("|%s|\n",src);

// 	// char *test;
// 	// test = 0;	
// 	// if (test != 0 && *test)
// 	// 	printf("here se glksdfj");
// }
