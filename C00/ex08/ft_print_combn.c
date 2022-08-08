/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:47:52 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/08 18:53:41 by joaooliv         ###   ########.fr       */
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

void	ft_print_combn(int n)
{
	char	future_nums[9];

	ft_print_combn_rec(n, n, 0, future_nums);
}
