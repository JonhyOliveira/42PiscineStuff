/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affa_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:54:21 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/19 11:06:45 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define TO_FIND 'a'

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			if (*argv[1] == TO_FIND)
			{
				write(1, "a\n", 2);
				return (1);
			}
			argv[1]++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "a\n", 2);
	return (1);
}
