int	ft_recursive_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		result = result * 1;
	else
		result = result * ft_recursive_factorial(nb - 1);
	return (result);
}