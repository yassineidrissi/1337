int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (++i < power)
		result = result * nb;
	return (result);
}