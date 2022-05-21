
#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	a;

	if (nb == INT_MIN)
		write(1, "-2147483648", 11);
	else if (nb < 10 && nb >= 0)
	{
		a = nb + 48;
		write(1, &a, 1);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-1 * nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10 );
	}
}
/*
int main()
{
	ft_putnbr(-2147483647);
}*/
