/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 17:33:09 by vgoncalv          #+#    #+#             */
/*   Updated: 2022/08/17 19:09:39 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int ft_recursive_power_test(int nb, int power)
{
	int res;
	int real;

	res = ft_recursive_power(nb, power);
	//if (power == 0 && nb == 0)
	//	real = 1;
	//else
	if (power < 0)
		real = 0;
	else if (power == 0)
		real = 1;
	else
		real = (int)pow(nb, power);
		//printf("%f\n", pow(nb, power));

	if (res == real)
		printf("OK: nb = %d, power = %d, result: %d\n", nb, power, res);
	else
		printf("! KO: nb = %d, power = %d, result: %d (expected %d)\n", nb, power, res, real);
	return (res == real);
}

int	main(void)
{
	int nb;
	int power;

	// testando potencias negativas(deve retornar 0)
	printf("[1] Potencias negativas(deve retornar 0)\n");
	nb = -4;
	while (nb <= 4)
	{
		power = -4;
		while (power < 0)
		{
			ft_recursive_power_test(nb, power);
			power++;
		}
		nb++;
	}
	// testando potencias 0(deve retornar 1)
	printf("[2] Potencias 0(deve retornar 1)\n");
	nb = -4;
	power = 0;
	while (nb <= 4)
	{
		ft_recursive_power_test(nb, power);
		nb++;
	}
	// testando potencias 0(deve retornar 1)
	printf("[3] Potencias positivas(deve retornar o numero elevado a potencia)\n");
	nb = -4;
	while (nb <= 4)
	{
		power = 1;
		while (power <= 4)
		{
			ft_recursive_power_test(nb, power);
			power++;
		}
		nb++;
	}
	return (0);
}
