/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 13:31:49 by yaidriss          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/05/19 01:09:37 by yaidriss         ###   ########.fr       */
=======
/*   Updated: 2022/05/19 19:42:53 by yaidriss         ###   ########.fr       */
>>>>>>> e2f8c5fb3755f573e7ac30c03386a746dad16c44
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	print_hex(int nbr)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nbr > 16)
	{
		print_hex(nbr / 10);
		print_hex(nbr % 10);
	}
	else
		write(1, &hex[nbr], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 31 && str[i] >= 0) || str[i] == 127)
		{
			write(1, "\\", 1);
			if (str[i] < 0)
				str[i] += 256;
<<<<<<< HEAD
			if (str[i] < 16)
				write(1, "0", 1);
=======
>>>>>>> e2f8c5fb3755f573e7ac30c03386a746dad16c44
			print_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
