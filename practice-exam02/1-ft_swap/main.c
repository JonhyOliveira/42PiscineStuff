/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 08/19/2022 11:19:58                      #+#    #+#             */
/*   Updated: 2022/08/19 11:22:07 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

#include <stdio.h>
int	main()
{
	int a, b;

	a = 5;
	b = 16;
	printf("a:%d , b:%d\n", a, b);
	ft_swap(&a, &b);
	printf("a:%d , b:%d", a, b);
}
