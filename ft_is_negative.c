/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:06:16 by leaugust          #+#    #+#             */
/*   Updated: 2024/03/16 16:35:37 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}
