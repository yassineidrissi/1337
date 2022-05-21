
#include <stdio.h>

int	ft_isspace(char c)
{
	if (c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v' || c == ' ')
		return (1);
	else
		return (0);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0 ;
	while (*(str + i) != '\0')
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

int	ft_in_base(char c, char *base)
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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	if (ft_check(base))
	{
		while (ft_isspace(str[i]))
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign = -1 * sign;
			i++;
		}
		while (ft_in_base(str[i], base) != -1)
		{
			result = result * ft_strlen(base) + ft_in_base(str[i], base);
			i++;
		}
	}
	return (sign * result);
}
/*
int main()
{
	int b = ft_atoi_base("-80000001","0123456789abcdef");
	printf("b = %d\n ",b);
	return 0;
}*/
