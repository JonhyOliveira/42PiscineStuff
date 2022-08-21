/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_dup_printable.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 08/21/2022 16:33:22                      #+#    #+#             */
/*   Updated: 2022/08/21 16:37:57 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs/rush04.h"

// receives a NULL terminated string and duplicates to heap, 
// returning a pointer to it
// or a NULL pointer if it's not printable
char	*ft_strdup_printable(char *src)
{
	char	*dest;
	char	*orig_dest;

	orig_dest = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	dest = orig_dest;
	if (dest)
	{
		while (*src >= 32 && *src < 127)
		{
			*dest++ = *src++;
		}
		*dest = 0;
	}
	return (orig_dest);
}
