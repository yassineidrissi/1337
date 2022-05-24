int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i <= (nb / i))
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}