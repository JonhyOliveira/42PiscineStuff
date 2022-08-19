/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 22:53:54 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/16 00:04:16 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	i;

	dest_size = 0;
	src_size = 0;
	while (dest[dest_size])
	{
		dest_size++;
	}
	while (src[src_size])
	{
		src_size++;
	}
	if (size == 0 || dest_size >= size)
		return (src_size + size);
	i = 0;
	while (src[i] && i < size - dest_size - 1)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = 0;
	return (dest_size + src_size);
}
