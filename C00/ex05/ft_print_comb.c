/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:00:42 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/05 15:26:36 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn_rec(int orig_n, int n_left, int prev, \
		char *previous_nums)
{
	while (prev < 10)
	{
		previous_nums[orig_n - n_left] = prev + '0';
		if (n_left == 1)
		{
			write(1, previous_nums, orig_n);
			write(1, &" ", 1);
		}
		prev++;
		ft_print_combn_rec(orig_n, n_left - 1, prev, previous_nums);
	}
}

void	ft_print_comb(void)
{
	char	future_nums[3];

	ft_print_combn_rec(3, 3, 0, future_nums);
}
