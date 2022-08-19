/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 04:42:14 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/17 19:11:15 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power <= 0)
	{
		if (power == 0)
			return (1);
		else
			return (0);
	}
	else
	{
		i = 1;
		result = 1;
		while (i <= power)
		{
			result *= nb;
			i++;
		}
		return (result);
	}
}
