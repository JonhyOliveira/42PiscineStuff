/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:19:21 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/15 17:20:25 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	curr_size;

	src_size = 0;
	while (*(src + src_size))
		src_size++;
	if (size != 0)
	{
		curr_size = 0;
		while (*(src + curr_size) && curr_size < size)
		{
			*(dest + curr_size) = *(src + curr_size);
			curr_size++;
		}
		*(dest + curr_size - 1) = 0;
	}
	return (src_size);
}
