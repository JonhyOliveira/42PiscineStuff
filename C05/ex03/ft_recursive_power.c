/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 04:52:36 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/16 05:04:15 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0 && nb == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power <= 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
#include <stdio.h>
void	test(int nb, int power)
{
	printf("n: %i, power: %i\t\t%i\n", nb, power, ft_recursive_power(nb, power));
}

int	main()
{
	test(0, 0);
	test(2, -10);
	test(1, 10);
	test(2, 30);
	test(10, 4);
}

