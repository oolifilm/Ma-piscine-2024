/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 02:13:59 by leaugust          #+#    #+#             */
/*   Updated: 2024/03/20 21:49:11 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - i - 1]);
		i++;
	}
}
/*
int	main(void)
{
	int	i;
	int	tab[4];

	tab[0] = 42;
	tab[1] = 43;
	tab[2] = 44;
	tab[3] = 45;
	ft_rev_int_tab(tab, 4);
	i = 0;
	while (i < 4)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}*/
