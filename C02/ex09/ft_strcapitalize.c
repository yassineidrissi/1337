/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 13:32:17 by yaidriss          #+#    #+#             */
/*   Updated: 2022/05/18 23:21:13 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if ((str[0] >= 'a') && (str[0] <= 'z'))
		str[0] -= 32;
	while (str[i])
	{
		if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z') || \
				(str[i - 1] >= 'a' && str[i - 1] <= 'z') || \
				(str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
