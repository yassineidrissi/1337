/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 19:22:18 by yaidriss          #+#    #+#             */
/*   Updated: 2022/05/15 19:24:07 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C02.h"

int main(int ac, char **av)
{
	int a;
	a = ft_str_is_alpha(av[1]);

	printf(" a = %d \n " ,a);
}
