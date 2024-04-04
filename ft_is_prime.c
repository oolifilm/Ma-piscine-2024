/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:19:46 by leaugust          #+#    #+#             */
/*   Updated: 2024/04/02 20:08:01 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	nbr;
	int	max_nbr;

	nbr = 2;
	max_nbr = 46340;
	if (nb <= 1)
		return (0);
	else
	{
		while (max_nbr >= nbr && nb >= nbr * nbr)
		{
			if (nb % nbr == 0)
				return (0);
			nbr++;
		}
	}
	return (1);
}
