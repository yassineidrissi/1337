/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric_main.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 19:27:15 by yaidriss          #+#    #+#             */
/*   Updated: 2022/05/15 19:28:11 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C02.h"

int main(int ac, char **av)
{
	int a;
	a = ft_str_is_numeric(av[1]);

	printf(" a = %d \n " ,a);
}
