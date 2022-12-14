/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 00:08:41 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/18 23:45:07 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = consume_prefix(&str);
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	result *= sign;
	return (result);
}
//
//#include <stdio.h>
//int main()
//{
//	printf("%i", ft_atoi("\n\t\r\v\r++++---420"));
//}
