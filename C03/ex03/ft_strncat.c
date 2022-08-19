/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:30:27 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/15 22:50:53 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*orig_dest;

	orig_dest = dest;
	while (*dest)
		dest++;
	i = 0;
	while (src[i] && i < nb)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (orig_dest);
}
