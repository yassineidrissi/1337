
#include <unistd.h>
//#include <stdlib.h>
#include "ft_stock_str.h"
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	char	a;
	int		b;
	int		c;
	char	cc;

	if (nbr < 10 && nbr >= 0)
	{
		a = nbr + 48;
		write(1, &a, 1);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-1 * nbr);
	}
	else
	{
		b = nbr / 10;
		c = nbr - 10 * b;
		cc = c + 48 ;
		ft_putnbr(b);
		write(1, &cc, 1);
	}
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str && *(str + i) != '\0')
	{
		write(1, (str + i), 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par && par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		i++;
	}
}
/*
int main()
{
    // char *av[4] = {"aham","lhou","amin","aham"};
    // t_stock_str *p =ft_strs_to_tab(4, av);
    // ft_show_tab(p);
}*/
