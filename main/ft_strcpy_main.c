/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:39:47 by yaidriss          #+#    #+#             */
/*   Updated: 2022/05/15 19:09:41 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C02.h"

int main(int ac, char **av)
{
	char dest[50];
	strcpy(dest,av[1]);
    printf("src = %s et dest = %s \n",av[1],dest);
	char dest1[50];
	ft_strcpy(dest1,av[1]);
    printf("src1 = %s et dest1 = %s \n",av[1],dest1);
}