/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:11:35 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/19 12:27:44 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_delimiter(char c)
{
	return (c == '\t' || c == ' ');
}

int	main(int argc, char *argv[])
{
	char	*str;

	if (argc == 2)
	{
		str = argv[1];
		while (is_delimiter(*str))
			str++;
		while (*str && !is_delimiter(*str))
			write(1, str++, 1);
	}
	write(1, "\n", 1);
	return (1);
}
