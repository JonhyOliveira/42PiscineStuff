/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:00:42 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/08 18:32:19 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn_rec(int orig_n, int n_left, int current, \
		char *previous_nums)
{
	while (current < 10 && n_left >= 1)
	{
		previous_nums[orig_n - n_left] = current + '0';
		if (n_left == 1)
		{
			write(1, previous_nums, orig_n);
			if ((10 - orig_n) + '0' != previous_nums[0])
				write(1, &", ", 2);
		}	
		current++;
		ft_print_combn_rec(orig_n, n_left - 1, current, previous_nums);
	}
}

void	ft_print_comb(void)
{
	char	future_nums[3];

	ft_print_combn_rec(3, 3, 0, future_nums);
}
