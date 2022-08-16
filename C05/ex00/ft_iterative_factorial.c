/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 03:52:21 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/16 05:59:25 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
		return (0);
	result = 1;
	i = nb;
	while (i > 0)
	{
		result *= i;
		i--;
	}
	return (result);
}
//#include <stdio.h>
//void	test(int nb)
//{
//	printf("%i:\t%i\n", nb, ft_iterative_factorial(nb));
//}
//
//int	main()
//{
//	test(-1);
//	test(0);
//	test(1);
//	test(3);
//	test(10);
//	test(11);
//	test(1000);
//
//	return (0);
//}
