/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:01:40 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/17 17:37:20 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// checks if there is n that can divide nb in whole part
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
