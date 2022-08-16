/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 04:29:15 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/16 04:41:42 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0)
	{
		if (nb == 0 || nb == 1)
			return (nb);
		else
			return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (0);
}
//#include <stdio.h>
//void	test(int nb)
//{
//	printf("%i:\t%i\n", nb, ft_recursive_factorial(nb));
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
//
