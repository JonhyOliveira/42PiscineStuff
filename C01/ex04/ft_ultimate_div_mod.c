/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:12:25 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/10 16:16:06 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>
int	main()
{
	int div, mod;
	div = 27;
	mod = 7;

	printf("div: %i, mod: %i\n", div, mod);

	ft_ultimate_div_mod(&div, &mod);
	printf("div: %i, mod: %i | should be [%i, %i]\n", div, mod, 27/7, 27%7);

}*/
