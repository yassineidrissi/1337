//#include <unistd.h>
//#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_check(char *base);
char	*ft_add_char(char *src, char c);
char	*ft_int_base(int nbr, char *base, char *res);
char	*ft_putnbr_base(int nbr, char *base);

int	ft_char_in_base(char c, char *base)
{
	int	i;
	int	len_base;

	i = 0;
	len_base = ft_strlen(base);
	while (i < len_base)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_isspace(char c)
{
	if (c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v' || c == ' ')
		return (1);
	else
		return (0);
}

long long	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	long
		long
		result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1 * sign;
		i++;
	}
	while (ft_char_in_base(str[i], base) != -1)
	{
		result = result * ft_strlen(base) + ft_char_in_base(str[i], base);
		i++;
		if (result < INT_MIN || result > INT_MAX)
			return ((long long)INT_MAX + 1);
	}
	return (sign * result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long
		long
		a;
	char
		*result;

	a = 0;
	result = 0;
	if (ft_check(base_from) && ft_check(base_to) && nbr)
	{
		a = ft_atoi_base(nbr, base_from);
		if (a == (long long)INT_MAX + 1)
			return (result);
		result = ft_putnbr_base(a, base_to);
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	
	char *src;
	 
	src = ft_convert_base("", "123", "0123456789");
	//src = ft_putnbr_base(12, "0123456789s");
	printf("|%s|\n",src);
}*/