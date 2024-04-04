/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 01:51:41 by leaugust          #+#    #+#             */
/*   Updated: 2024/03/19 12:44:43 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 42;
	nbr2 = 24;
	ft_swap(&nbr1, &nbr2);
	printf("nbr1 = %d, nbr2 = %d", nbr1, nbr2);
	return (0);
}
*/
