/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:20:01 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/18 19:45:36 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	divisor;

	if (nb > 1)
	{
		divisor = 2;
		while (divisor <= nb / 2)
		{
			if (nb % divisor == 0)
			{
				return (0);
			}
			divisor++;
		}
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	else
	{
		while (nb <= 2147483647)
		{
			if (ft_is_prime(nb))
				return (nb);
			nb++;
		}
		return (0);
	}
}
