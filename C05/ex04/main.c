/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 17:40:52 by vgoncalv          #+#    #+#             */
/*   Updated: 2022/08/17 17:51:38 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index);

int	main(void)
{
	int res;
	int index;
	int	expected[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 };

	index = 0;
	while (index <= 12)
	{
		res = ft_fibonacci(index);
		if (res == expected[index])
			printf ("%d: OK\n", res);
		else
			printf ("%d: KO (expected %d for %i)\n", res, expected[index], index);
		index++;
	}
	return (0);
}
