/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable (copy).c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 22:40:35 by leaugust          #+#    #+#             */
/*   Updated: 2024/03/25 16:38:36 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= ' ') && (str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	c1[] = "jdk\n";
	char	c2[] = "jdk";

	printf("%d\n", ft_str_is_printable(c1));
	printf("%d\n", ft_str_is_printable(c2));
}*/
