/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 17:04:47 by yaidriss          #+#    #+#             */
/*   Updated: 2022/05/15 13:33:26 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strncpy(char *dest, const char *src, unsigned int n)
{
	int	i;

	i = -1;
	while (++i < n && src[i])
		dest[i] = src[i];
	return (dest);
}
