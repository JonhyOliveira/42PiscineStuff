/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:19:16 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/10 16:09:36 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main()
{
	int div, mod;
	
	div = 0;
	mod = 0;

	printf("div: %i, mod: %i\n", div, mod);

	ft_div_mod(27, 7, &div, &mod);
	printf("div: %i, mod: %i | should be [%i, %i]\n", div, mod, 27/7, 27%7);

}*/
