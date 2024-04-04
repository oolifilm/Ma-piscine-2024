/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 17:31:03 by leaugust          #+#    #+#             */
/*   Updated: 2024/03/31 00:21:08 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	i;

	destlen = 0;
	srclen = 0;
	i = 0;
	while (dest[destlen] && destlen < size)
		destlen++;
	while (src[srclen])
		srclen++;
	if (size == 0)
		return (srclen);
	i = destlen;
	while (src[i - destlen] && i < size - 1)
	{
		dest[i] = src[i - destlen];
		i++;
	}
	if (destlen < size)
		dest[i] = '\0';
	return (destlen + srclen);
}
