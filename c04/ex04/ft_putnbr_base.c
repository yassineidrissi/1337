
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

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
		if (base[i] == '+' || base[i] == '-')
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

void	ft_int_base(int nbr, char *base)
{
	int	len_base;

	len_base = ft_strlen(base);
	if (nbr < 0)
	{
		nbr = -1 * nbr;
		write(1, "-", 1);
	}
	if (nbr > 0)
	{
		ft_int_base(nbr / len_base, base);
		write(1, &base[nbr % len_base], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	nb;

	nb = 1;
	if (ft_check(base))
	{
		if (nbr == 0)
			write(1, &base[0], 1);
		else if (nbr == -2147483648)
		{
			write(1, "-", 1);
			ft_int_base(-1 * (nbr / ft_strlen(base)), base);
			write(1, &base[-1 * (nbr % ft_strlen(base))], 1);
		}
		else
			ft_int_base(nbr, base);
	}
}
/*
int main()
{
	ft_putnbr_base(48," 0");
	//ft_int_binaire(-16);
	//printf("-> %s",vrai);
}*/
