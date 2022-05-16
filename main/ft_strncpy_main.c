/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 19:07:38 by yaidriss          #+#    #+#             */
/*   Updated: 2022/05/15 19:19:00 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C02.h"

int main(int ac, char **av)
{
	char dest[50];
	strncpy(dest,av[1],  10);
    printf("src = %s et dest = %s \n",av[1],dest);
	char dest1[50];
	ft_strncpy(dest1,av[1], 10);
    printf("src1 = %s et dest1 = %s \n",av[1],dest1);
}