/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:34:23 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/18 23:06:14 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_len(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*orig_dest;

	orig_dest = (char *) malloc(sizeof(char) * (ft_str_len(src) + 1));
	dest = orig_dest;
	if (dest)
	{
		while (*src)
			*dest++ = *src++;
		*dest = 0;
	}
	return (orig_dest);
}
//int	main()
//{
//	char *dest;
//
//	dest = ft_strdup("Ola =D");
//	printf("- %s\n", dest);
//	dest = ft_strdup("");
//	printf("- %s\n", dest);
//	dest = ft_strdup(";_;");
//	printf("- %s\n", dest);
//}
