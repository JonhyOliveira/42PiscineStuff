/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:59:33 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/18 12:07:43 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	range_size(int min, int max)
{
	return (max - min);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*range_it;
	int	curr;

	if (min >= max)
	{
		*range = (int *) 0;
		return (0);
	}
	*range = (int *) malloc(sizeof(int) * range_size(min, max));
	range_it = *range;
	curr = min;
	while (curr < max)
	{
		*range_it++ = curr++;
	}
	return (range_size(min, max));
}
