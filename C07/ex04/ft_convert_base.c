/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:58:19 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/18 23:29:21 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define INVALID_RADIX 0
int	ft_atoi_base(char *str, char *base);

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	from_radix;
	int	to_radix;
	int number;

	to_radix = parse_radix(base_to);
	if (from_radix == INVALID_RADIX)
		return ((char *) 0);
	number = ft_atoi_base(nbr, base_from);

}
