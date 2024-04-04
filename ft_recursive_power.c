/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 09:25:43 by leaugust          #+#    #+#             */
/*   Updated: 2024/04/04 15:42:36 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*#include <stdio.h>

int	main(void)
{
	printf("1:%d\n", ft_recursive_power(0, 0));
	printf("0:%d\n", ft_recursive_power(0, 2));
	printf("256:%d\n", ft_recursive_power(4, 4));
	printf("16777216:%d\n", ft_recursive_power(-8, 8));
	printf("1024:%d\n", ft_recursive_power(-2, 10));
	printf("-40353607:%d\n", ft_recursive_power(-7, 9));
	printf("0:%d\n", ft_recursive_power(1, -10));
	printf("0:%d\n", ft_recursive_power(1, -1));
	printf("1:%d\n", ft_recursive_power(10, 0));
	printf("10:%d\n", ft_recursive_power(10, 1));
	printf("100:%d\n", ft_recursive_power(10, 2));
	printf("216:%d\n", ft_recursive_power(6, 3));
}*/
