/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:28:49 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/18 23:15:47 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// babylonian estimation :)
int	ft_sqrt(int nb)
{
	int	estimation;
	int	nb_div_estimation;
	int step_counter = 0;
	
	if (nb <= 0)
		return (0);
	estimation = nb;
	nb_div_estimation = nb / estimation;
	while (estimation > nb_div_estimation)
	{
		step_counter++;
		estimation = (estimation + nb_div_estimation) / 2;
		nb_div_estimation = nb / estimation;
	}
	printf("Done in %d steps.", step_counter);
	if (estimation * estimation == nb)
		return (estimation);
	else
		return (0);
}
