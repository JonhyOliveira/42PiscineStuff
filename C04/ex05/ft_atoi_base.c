/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 01:48:00 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/17 11:07:31 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define INVALID_RADIX 0

// parses a radix from a string, INVALID_RADIX if size <= 1 || 
// duplicated chars || contains + or -
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

// consumes prefix whitespaces and signs and returns sign result
int	consume_prefix(char **str_p)
{
	int		sign;
	char	*str;

	str = *str_p;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	*str_p = str;
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	radix;
	int	sign;
	int	result;
	int	curr_result;

	radix = parse_radix(base);
	sign = consume_prefix(&str);
	result = 0;
	while (*str)
	{
		curr_result = 0;
		while (base[curr_result] != *str && base[curr_result])
			curr_result++;
		if (!base[curr_result])
			return (sign * result);
		result = (result * radix) + curr_result;
		str++;
	}
	return (sign * result);
}
//#include <stdio.h>
//int	main()
//{
//	printf("%i", ft_atoi_base("---01010000", "01"));
//}
