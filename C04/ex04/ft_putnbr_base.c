/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 00:32:19 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/17 11:06:56 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// parses a radix from a string, INVALID_RADIX if size <= 1 || 
// duplicated chars || contains + or -
#include <unistd.h>
#define INVALID_RADIX 0

int	parse_radix(char *str)
{
	int	curr_radix;
	int	aux;

	curr_radix = INVALID_RADIX;
	while (str[curr_radix])
	{
		if (str[curr_radix] == '+' || str[curr_radix] == '-')
			return (INVALID_RADIX);
		aux = curr_radix + 1;
		while (str[aux])
			if (str[curr_radix] == str[aux++])
				return (INVALID_RADIX);
		curr_radix++;
	}
	if (curr_radix <= 1)
		return (INVALID_RADIX);
	return (curr_radix);
}

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base_rec(int nbr, char *base, int radix)
{
	if (nbr < 0)
	{
		put_char('-');
		nbr *= -1;
	}
	if (nbr < radix)
		put_char(base[nbr]);
	else
	{
		ft_putnbr_base_rec(nbr / radix, base, radix);
		ft_putnbr_base_rec(nbr % radix, base, radix);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	radix;

	radix = parse_radix(base);
	if (radix != INVALID_RADIX)
	{
		ft_putnbr_base_rec(nbr, base, radix);
	}
}
//
//int main()
//{
//	int n = -100;
//	ft_putnbr_base(n, "ahg");
//}
