/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 23:50:51 by leaugust          #+#    #+#             */
/*   Updated: 2024/03/20 23:51:29 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	c;

	j = 0;
	while (j < size - 1)
	{
		i = j;
		while (i < size)
		{
			if (tab[j] >= tab[i])
			{
				c = tab[j];
				tab[j] = tab[i];
				tab[i] = c;
			}
			i++;
		}
		j++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[] = {25, 89, 34, 75};
	
	ft_sort_int_tab(tab, 4);
	printf("%d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]);
	return (0);
}*/
