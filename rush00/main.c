/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:23:40 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/07 22:20:16 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int line, int column);

void	write_all(char *str)
{
	int i;

	i = 0;
	while(str[i] != 0)
	{
		write(1, str + i, 1);
		i++;
	}
}

void do_test(int line, int column)
{
	char str[14] = "Teste (X,X):\n";
	str[7] = (char)line+32;
	str[9] = (char)column+32;
	write_all(str);
	rush(line, column);
}

int		main()
{
	write_all("Should be empty:");
	do_test(-100, -100);
	do_test(0, 0);
	do_test(10, 0);
	do_test(0, 10);
	write_all("Should succeed:");
	do_test(1, 1);
	do_test(3, 1);
	do_test(1, 3);
	do_test(100, 100);
}
