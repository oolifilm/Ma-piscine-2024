/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 21:10:03 by leaugust          #+#    #+#             */
/*   Updated: 2024/03/21 21:17:55 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include	<stdio.h>

int	main(void)
{
	char	c1[] = "";
	char	c2[] = "abba";

	printf("%d\n", ft_str_is_lowercase(c1));
	printf("%d\n", ft_str_is_lowercase(c2));
}*/
