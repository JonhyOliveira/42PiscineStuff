/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:25:05 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/19 12:07:58 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print(char *str)
{
	char	*end;

	if (*str)
	{
		end = str;
		while (*(end + 1))
			end++;
		while (end >= str)
			write(1, end--, 1);
	}
	write(1, "\n", 1);
	return (str);
}
