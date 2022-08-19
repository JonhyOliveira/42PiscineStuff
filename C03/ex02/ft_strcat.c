/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:28:42 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/17 21:24:15 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*orig_dest;

	orig_dest = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (orig_dest);
}
#include <stdio.h>
int main()
{
	char src[] = "asdasdas";
	char dest[] = "sadas12 ";

	printf("%s\n", ft_strcat(dest, src));
}
