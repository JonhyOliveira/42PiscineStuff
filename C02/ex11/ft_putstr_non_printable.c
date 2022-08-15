/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:49:47 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/15 11:43:10 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_printable(char c)
{
	if (c < 32 || c == 127)
		return (0);
	return (1);
}

char	to_hex_char(int c)
{
	if (c <= 9 && c >= 0)
		return (c + '0');
	else if (c >= 10 && c <= 15)
		return (c - 10 + 'a');
	return ('!');
}

// calculates 2 digit hex if its not printable
void	ft_putstr_non_printable(char *str)
{
	char	first_hex;
	char	second_hex;

	while (*str)
	{
		if (ft_char_is_printable(*str))
			write(1, str, 1);
		else
		{
			first_hex = to_hex_char((unsigned char) *str / 16);
			second_hex = to_hex_char((unsigned char) *str % 16);
			write(1, "\\", 1);
			write(1, &first_hex, 1);
			write(1, &second_hex, 1);
		}
		str++;
	}
}
