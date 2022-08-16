/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 05:06:17 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/16 05:12:10 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0 || index == 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
#include <stdio.h>
void	test(int index)
{
	printf("index: %i, fib: %i\n", index, ft_fibonacci(index));
}

int main()
{
	test(0);
	test(1);
	test(2);
	test(4);
	test(10);
}
