int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (result);
	else if (power > 1)
		result = result * ft_recursive_power(nb, power - 1);
	return (result);
}