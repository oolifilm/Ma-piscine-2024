/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:43:11 by leaugust          #+#    #+#             */
/*   Updated: 2024/03/25 19:07:44 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_uppercases(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_lowercases(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	else
		return (0);
}

int	ft_numbers(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (ft_lowercases(str[0]) == 1)
		str[0] -= 32;
	while (str[i])
	{
		if (ft_lowercases(str[i]) == 1)
			str[i] -= 32;
		if (ft_uppercases(str[i - 1]) == 1
			|| ft_lowercases(str[i - 1]) == 1
			|| ft_numbers(str[i - 1]) == 1)
		{
			if (ft_uppercases(str[i]) == 1)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	c1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", c1);
	ft_strcapitalize(c1);
	printf("%s\n", c1);
	return (0);
}*/
