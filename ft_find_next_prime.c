/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:30:20 by leaugust          #+#    #+#             */
/*   Updated: 2024/04/02 20:07:04 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	nbr;
	int	max_nbr;

	nbr = 3;
	max_nbr = 46340;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	else
	{
		while (max_nbr >= nbr && nb >= nbr * nbr)
		{
			if (nb % nbr == 0)
				return (0);
			nbr += 2;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	res;

	res = nb + 1;
	if (nb == 2147483647)
		return (2147483647);
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(res) != 1 && res != nb)
		res++;
	return (res);
}
