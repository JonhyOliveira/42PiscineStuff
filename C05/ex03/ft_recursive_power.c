/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 04:52:36 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/17 19:13:28 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	case0(int power)
{
	if (power == 0)
		return (1);
	else if (power > 0)
		return (0);
	else
		return (-2147483648);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
